#include <iostream>
#include <cstring>

int main()
{
	std::cout << "Podaj slowa (kiedy skonczysz, napisz gotowe)" << std::endl;
	char tablica[1000];
	int licznik;

	while (std::strcmp(tablica, "gotowe"))
	{
		std::cin >> tablica;
		licznik++;
	}

	std::cout << "Podano " << licznik - 1 << " slow." << std::endl;

	return 0;
}
