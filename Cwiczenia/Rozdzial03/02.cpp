#include <iostream>

int main()
{
	using namespace std;

	const int caleWStopie = 12;
	const double caleNaMetry = 0.0264;
	const double funtyNaKilo = 2.2;

	cout << "Podaj wzrost w stopach i calach oraz wage w funtach." << endl;

	int cale, stopy;
	double funty;

	cout << "Stopy: ";
	cin >> stopy;

	cout << "Cale: ";
	cin >> cale;

	cout << "Funty: ";
	cin >> funty;

	int caleTotal = stopy * caleWStopie + cale;
	double metry = caleTotal * caleNaMetry;
	double kilo = funty / funtyNaKilo;

	double BMI = kilo / (metry * metry);

	cout << "Wtoje BMI to: " << BMI << endl;

	return 0;
}
