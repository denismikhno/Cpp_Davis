#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

void valueFn(int nArg);
void pointerFn(int* nArg);
void referenceFn(int& nArg);

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num = 0;
    cout << "Значение num = " << num << endl;

    valueFn(num);
    cout << "После вызова valueFn(num) значение num = " << num << endl;

    int* pNum = &num;
    pointerFn(pNum);
    cout << "После вызова pointerFn(pNum) значение num = " << num << endl;

    referenceFn(num);
    cout << "После вызова referenceFn(&num) значение num = " << num << endl;

    getch();

    return 0;
}

void valueFn(int nArg)
{
    nArg = 10;
}

void pointerFn(int* nArg)
{
    *nArg = 10;
}

void referenceFn(int& nArg)
{
    nArg = 50;
}
