#include <iostream>

int main()
{
	std::cout << "Podaj liczbe wierszy: ";
	int liczbaWierszy;
	std::cin >> liczbaWierszy;
	std::cin.get();

	for (int i = 1; i <= liczbaWierszy; ++i)
	{
		for (int j = 0; j < liczbaWierszy - i; ++j)
		{
			std::cout << ".";
		}

		for (int k = 0; k < i; ++k)
		{
			std::cout <<"*";
		}
		std::cout << std::endl;
	}
	return 0;
}
