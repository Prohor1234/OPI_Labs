#include <iostream>

int main()
{
	int number = 0x12345678;

	char hello[] = "Hello, ";

	char lfie[] = "ProhorGuletsky2006";
	char rfie[] = "��������������2006";
	char lr[] = "��������2006Prohr";

	wchar_t Lfie[] = L"ProhorGuletsky2006";
	wchar_t Rfie[] = L"��������������2006";
	wchar_t Lr[] = L"��������2006Prohr";

	std::cout << hello << lfie << std::endl;

	return 0;
}