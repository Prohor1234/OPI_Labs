#include <iostream>
#include <windows.h>
using namespace std;

void case3()
{
    int n, otherRegister, rusLetter, sum;
    char symbol;

    cout << "Введите символ" << endl;
    cin >> symbol;

    if (int(symbol) > 47 && int(symbol) < 58)
    {
        cout << hex << int(symbol);
    }
    else cout << "ERROR";
}