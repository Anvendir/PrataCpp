#include <iostream>

struct car
{
	char marka[100];
	int rokBudowy;
};

int main()
{
	std::cout << "Ile samochodow chcesz skatalogowac?" << std::endl;
	int liczCar = 0;
	std::cin >> liczCar;
	std::cin.get();

	car * Katalog = new car[liczCar];

	for (int i = 0; i < liczCar; ++i)
	{
		std::cout << "Samochod #" << i + 1 << ":" <<std::endl;
		std::cout << "Prosze podac marke: ";
		std::cin.getline(Katalog[i].marka, 100);
		std::cout << "Prosze podac rok produkcji: ";
		std::cin >> Katalog[i].rokBudowy;
		std::cin.get();
		std::cout << std::endl;
	}

	for (int i = 0; i < liczCar; ++i)
	{
		std::cout << Katalog[i].rokBudowy << " "
				  << Katalog[i].marka << std::endl;
	}

	delete [] Katalog;

	return 0;
}
