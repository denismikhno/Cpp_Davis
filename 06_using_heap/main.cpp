#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

int globalVar = 10;

void parent();
void child();

// Проблема области видимости
//*****************************************
 double* childFn();
 void parentFn();
//*****************************************


// Решение проблемы одласти видимости с помощью кучи
//*****************************************
 double* childFn1();
 void parentFn1();
//*****************************************

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "globalVar в main() = " << globalVar << endl;
    parent();
    //cout << "childVar в main() = " << childVar << endl;                       // не существует!
    //cout << "parentVar в main() = " << parentVar  << endl;                    // не существует!
    //cout << "laterVar в main() = " << laterVar << endl;                       // не существует!
    cout << "globalVar в main() = " << globalVar << endl;                       // существует!

    getch();

    return 0;
}

void child()
{
    int childVar = 3;
    cout << "childVar в child() = " << childVar << endl;
}

void parent()
{
    int parentVar = 1;
    cout << "parentVar в parent() = " << parentVar << endl;

    childFn();
    //cout << "childVar в parent() = " << childVar << endl;                     // не существует!

    int laterVar = 5;
    cout << "laterVar в parent() = " << laterVar << endl;

    parentVar = laterVar;
    cout << "parentVar в parent() = " << parentVar << endl;

    parentFn();

    parentFn1();
}

// Проблема области видимости
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

     // несмотря на то, что этот код работает, здесь переменной localVar уже не существует!!!
     // мы пишем в произвольную память и можем нарушить работу любой из работающих программ!!!
     *local = 0.2;
     res = *local;
     cout << "local = " << res << endl;

 }
//*****************************************


// Решение проблемы одласти видимости с помощью кучи
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
    cout << "Значение в куче = " << *local << endl;
    // В данном случае спокойно работаем с памятью
    *local = 2.7;
    cout << "Значение в куче = " << *local << endl;
    // и освобождаем ее, когда она нам уже не нужна!
    delete local;
 }
//*****************************************