#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool b;
    char c;
    int n;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;

    cout << "������ bool        = " << sizeof b << " ����" << endl;
    cout << "������ char        = " << sizeof c << " ����" << endl;
    cout << "������ int         = " << sizeof n << " �����" << endl;
    cout << "������ long        = " << sizeof l << " �����" << endl;
    cout << "������ long long   = " << sizeof ll << " ����" << endl;
    cout << "������ float       = " << sizeof f << " �����" << endl;
    cout << "������ double      = " << sizeof d << " ����" << endl;
    cout << "������ long double = " << sizeof ld << " ����" << endl;

    cout << endl << "������� Enter ��� �����������..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
