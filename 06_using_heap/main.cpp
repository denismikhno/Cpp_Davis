#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int globalVar = 10;

void parent();
void child();

// �������� ������� ���������
//*****************************************
 double* childFn();
 void parentFn();
//*****************************************


// ������� �������� ������� ��������� � ������� ����
//*****************************************
 double* childFn1();
 void parentFn1();
//*****************************************

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "globalVar � main() = " << globalVar << endl;
    parent();
    //cout << "childVar � main() = " << childVar << endl;                       // �� ����������!
    //cout << "parentVar � main() = " << parentVar  << endl;                    // �� ����������!
    //cout << "laterVar � main() = " << laterVar << endl;                       // �� ����������!
    cout << "globalVar � main() = " << globalVar << endl;                       // ����������!

    getch();

    return 0;
}

void child()
{
    int childVar = 3;
    cout << "childVar � child() = " << childVar << endl;
}

void parent()
{
    int parentVar = 1;
    cout << "parentVar � parent() = " << parentVar << endl;

    childFn();
    //cout << "childVar � parent() = " << childVar << endl;                     // �� ����������!

    int laterVar = 5;
    cout << "laterVar � parent() = " << laterVar << endl;

    parentVar = laterVar;
    cout << "parentVar � parent() = " << parentVar << endl;

    parentFn();

    parentFn1();
}

// �������� ������� ���������
//*****************************************
 double* childFn()
 {
     double localVar = 0.1;
     return &localVar;
 }
 void parentFn()
 {
     double* local;

     local = childFn();
     double res = *local;
     cout << "local = " << res << endl;

     // �������� �� ��, ��� ���� ��� ��������, ����� ���������� localVar ��� �� ����������!!!
     // �� ����� � ������������ ������ � ����� �������� ������ ����� �� ���������� ��������!!!
     *local = 0.2;
     res = *local;
     cout << "local = " << res << endl;

 }
//*****************************************


// ������� �������� ������� ��������� � ������� ����
//*****************************************
 double* childFn1()
 {
    double* localVar = new double;
    *localVar = 3.14;
    return localVar;
 }
 void parentFn1()
 {
    double* local = childFn1();
    double res = *local;
    cout << "�������� � ���� = " << *local << endl;
    // � ������ ������ �������� �������� � �������
    *local = 2.7;
    cout << "�������� � ���� = " << *local << endl;
    // � ����������� ��, ����� ��� ��� ��� �� �����!
    delete local;
 }
//*****************************************