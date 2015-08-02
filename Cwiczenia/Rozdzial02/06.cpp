#include <iostream>

double przelicz(double p_odl);

int main()
{
	double odl;
	std::cout << "Podaj odleglosc w latach swietlnych: ";
	std::cin >> odl; 

	std::cout << odl << " lat swietlnych to " << przelicz(odl) << " jednostek astronomicznych." << std::endl;

	return 0;
}

double przelicz(double p_odl)
{
	double wsp = 63240;

	return wsp * p_odl;
}

