#include <iostream>

int main()
{
	int number = 0x12345678;

	char hello[] = "Hello, ";

	char lfie[] = "ProhorGuletsky2006";
	char rfie[] = "ПрохорГулецкий2006";
	char lr[] = "Гулецкий2006Prohr";

	wchar_t Lfie[] = L"ProhorGuletsky2006";
	wchar_t Rfie[] = L"ПрохорГулецкий2006";
	wchar_t Lr[] = L"Гулецкий2006Prohr";

	std::cout << hello << lfie << std::endl;

	return 0;
}