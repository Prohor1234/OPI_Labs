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
    cout << "¬ыберите действие" << endl;
    cout << "1 Ц определение разницы значений кодов в Windows-1251 буквы латинского алфавита в прописном и строчном написании" << endl;
    cout << "2 Ц определение разницы значений кодов в Windows-1251 буквы русского алфавита в прописном и строчном написании" << endl;
    cout << "3 Ц вывод в консоль кода символа, соответствующего введенной цифре" << endl;
    cout << "4 - выход из программы" << endl;
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