#include <iostream>

int wiekM(int p_wiek);

int main()
{
	std::cout << "Podaj swoj wiek: ";
	int wiek;
	std::cin >> wiek;

	std::cout << "Twoj wiek w miesiacach to: " << wiekM(wiek) << std::endl;

	return 0;
}

int wiekM(int p_wiek)
{
	return p_wiek * 12;
}
