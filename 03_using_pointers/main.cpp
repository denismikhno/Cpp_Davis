#include <iostream>
#include <Windows.h>
#include <conio.h>

using namespace std;

int main(int argc, char* argv[])
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // ����� ������� ����
    cout << "���� ������� � ��������� � ������� � ������������ �������..." << endl;
    int dadsRoomNumber = 100;
    // * - ���� ����� ������ �������
    cout << "������ ��� ����� ������ ����� ������� ����!" << endl;
    int* mySon;
    // & - ����� ��� ������������� �������, ���� ����� ������� � ���������� ����� �������
    cout << "��� ���� � ������� ����..." << endl;
    mySon = &dadsRoomNumber;
    // ���������� ����� �������
    cout << "� ������ ����� �������." << endl;
    int number = *mySon;
    // �������� ����� �������
    cout << "������ ��� ����� �������� ����� ������� ����!" << endl << endl;
    cout << "����� ������� ���� - " << number << endl;

    getch();

    return 0;
}
