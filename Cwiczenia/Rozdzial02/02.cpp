#include <iostream>

int mileNaMetry(int p_odl);

int main()
{
	int odl;

	std::cout << "Podaj odleglosc w milach morskich" << std::endl;
	std::cin >> odl;
	std::cout << odl << " mil morskich to " << mileNaMetry(odl) << " metrow." << std::endl;
}

int mileNaMetry(int p_odl)
{
	return p_odl * 1852;
}
