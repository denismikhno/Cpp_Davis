#include <iostream>
#include <Windows.h>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start;
    int n;
    long l;
    long long ll;
    float f;
    double d;
    long double ld;
    int end;

    cout << "start = " << &start << endl;
    cout << "&n    = " << &n     << endl;
    cout << "&l    = " << &l     << endl;
    cout << "&ll   = " << &ll    << endl;
    cout << "&f    = " << &f     << endl;
    cout << "&d    = " << &d     << endl;
    cout << "&ld   = " << &ld    << endl;
    cout << "end   = " << &end   << endl;

    cout << endl << "Нажмите Enter для продолжения...";
    cin.ignore(10, '\n');
    cin.get();

    return 0;

}
