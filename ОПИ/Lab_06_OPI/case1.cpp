#include <iostream>
#include <windows.h>
using namespace std;

void case1()
{
    int n, otherRegister, rusLetter, sum;
    char symbol;

    cout << "Введите символ" << endl;
    cin >> symbol;

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
        cout << "ERROR" << endl;
    }
    sum = abs(int(symbol) - otherRegister);
    cout << "Код символа " << symbol << " В Windows-1251 - " << hex << int(symbol) << " а код символа " << char(otherRegister) << " - " << hex << otherRegister << " Разница между значениями " << hex << sum << endl; 
}