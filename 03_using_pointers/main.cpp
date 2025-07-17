#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // номер комнаты отца
    cout << "ќтец селитс€ в гостиницу в комнату с определенным номером..." << endl;
    int dadsRoomNumber = 100;
    // * - дает право искать комнату
    cout << "“олько сын может узнать номер комнаты отца!" << endl;
    int* mySon;
    // & - место где располагаетс€ комната, куда нужно сходить и посмотреть номер комнаты
    cout << "—ын идет к комнате отца..." << endl;
    mySon = &dadsRoomNumber;
    // посмотреть номер комнаты
    cout << "» узнает номер комнаты." << endl;
    int number = *mySon;
    // сообщить номер комнаты
    cout << "“еперь сын готов сообщить номер комнаты отца!" << endl << endl;
    cout << "Ќомер комнаты отца - " << number << endl;

    getch();

    return 0;
}
