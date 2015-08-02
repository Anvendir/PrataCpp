#include <iostream>

int main()
{
	using namespace std;
	const double mileNaKm = 1.609344;
	const double galonNaLitr = 3.78541178;

	cout << "Podaj spalanie w formacie europejskim l/100km: ";
	float spalanieL100Km;
	cin >> spalanieL100Km;

	double mile = 100 / mileNaKm;
	double galon = spalanieL100Km / galonNaLitr;
	double spalanieMilGalon = mile / galon;

	cout << "Oznacza to ze \"spalanie\" w formacie amerykanskim wynosi: " 
		 << spalanieMilGalon << " mil na galon" << endl;

	return 0;
}

