#include <iostream>
#include <windows.h>
using namespace std;

void case2()
{
    int n, otherRegister, rusLetter, sum;
    char symbol;

    cout << "������� ������" << endl;
    cin >> symbol;

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
        cout << "ERROR" << endl; 
    }
    sum = abs(rusLetter - otherRegister);
    cout << "��� ������� " << symbol << " � Windows-1251 - " << hex << rusLetter << " � ��� ������� " << char(otherRegister) << " - " << hex << otherRegister << " ������� ����� ���������� " << hex << sum << endl; 
}