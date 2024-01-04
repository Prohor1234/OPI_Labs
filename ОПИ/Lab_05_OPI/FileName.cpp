#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, otherRegister, rusLetter, sum;;
    char symbol;
    cout << "������� ������" << endl;
    cin >> symbol;
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
        if (int(symbol) > 64 && int(symbol) < 91)
        {
            otherRegister = int(symbol) + 32;
        }
        else if (int(symbol) > 96 && int(symbol) < 123)
        {
            otherRegister = int(symbol) - 32;
        }
        else
        {
            cout << "ERROR" << endl; break;
        }
        sum = abs(int(symbol) - otherRegister);
        cout << "��� ������� " << symbol << " � Windows-1251 - " << hex << int(symbol) << " � ��� ������� " << char(otherRegister) << " - " << hex << otherRegister << " ������� ����� ���������� " << hex << sum << endl; break;
    }
    case 2:
    {
        rusLetter = int(symbol) + 256;
        if (rusLetter > 191 && rusLetter < 224)
        {
            otherRegister = rusLetter + 32;
        }
        else if (rusLetter > 223 && rusLetter < 256)
        {
            otherRegister = rusLetter - 32;
        }
        else
        {
            cout << "ERROR" << endl; break;
        }
        sum = abs(rusLetter - otherRegister);
        cout << "��� ������� " << symbol << " � Windows-1251 - " << hex << rusLetter << " � ��� ������� " << char(otherRegister) << " - " << hex << otherRegister << " ������� ����� ���������� " << hex << sum << endl; break;
    }
    case 3:
    {
        if (int(symbol) > 47 && int(symbol) < 58)
        {
            cout << hex << int(symbol);
        }
        else cout << "ERROR"; break;
    }
    case 4:
    {
        break;
    }
    default: break;
    }
    return 0;
}