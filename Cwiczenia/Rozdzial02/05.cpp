#include <iostream>

double konwertuj(double p_temp);

int main()
{
	double celsjusz;
	std::cout << "Podaj temperature w stopniach Celsjusza: ";
	std::cin >> celsjusz;

	std::cout << celsjusz << " stopni Celsjusza, to " << konwertuj(celsjusz) << " stopni Farenheita"
			  << std::endl;

	return 0;
}

double konwertuj(double p_temp)
{
	return 1.8 * p_temp + 32.0;
}
