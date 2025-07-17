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

    cout << "Размер bool        = " << sizeof b << " байт" << endl;
    cout << "Размер char        = " << sizeof c << " байт" << endl;
    cout << "Размер int         = " << sizeof n << " байта" << endl;
    cout << "Размер long        = " << sizeof l << " байта" << endl;
    cout << "Размер long long   = " << sizeof ll << " байт" << endl;
    cout << "Размер float       = " << sizeof f << " байта" << endl;
    cout << "Размер double      = " << sizeof d << " байт" << endl;
    cout << "Размер long double = " << sizeof ld << " байт" << endl;

    cout << endl << "Нажмите Enter для продолжения..." << endl;
    cin.ignore(10, '\n');
    cin.get();

    return 0;
}
