#include <iostream>
#include <windows.h>
using namespace std;

void case1();
void case2();
void case3();

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, otherRegister, rusLetter, sum;
    char symbol;
    cout << "�������� ��������" << endl;
    cout << "1 � ����������� ������� �������� ����� � Windows-1251 ����� ���������� �������� � ��������� � �������� ���������" << endl;
    cout << "2 � ����������� ������� �������� ����� � Windows-1251 ����� �������� �������� � ��������� � �������� ���������" << endl;
    cout << "3 � ����� � ������� ���� �������, ���������������� ��������� �����" << endl;
    cout << "4 - ����� �� ���������" << endl;
    cin >> n;

    switch (n)
    {

    case 1:
    {
        case1();
        break;
    }
    case 2:
    {
        case2();
        break;
    }
    case 3:
    {
        case3();
        break;
    }
    case 4:
    {
        break;
    }

    }
    return 0;
}