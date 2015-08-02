#include <iostream>

struct Batonik
{
	char marka[30];
	float waga;
	int kalorie;
};

int main()
{
	using namespace std;

	Batonik tablicaBatonow[3] = { {"Mocha Munch", 2.3, 350},
								  {"Snickers", 5.6, 400},
								  {"Mars", 8.3, 700}
								};

	cout << "Marka: " << tablicaBatonow[0].marka << endl;
	cout << "Waga: " << tablicaBatonow[0].waga << endl;
	cout << "Kalorie: " << tablicaBatonow[0].kalorie << endl;

	cout << endl;

	cout << "Marka: " << tablicaBatonow[1].marka << endl;
	cout << "Waga: " << tablicaBatonow[1].waga << endl;
	cout << "Kalorie: " << tablicaBatonow[1].kalorie << endl;

	cout << endl;

	cout << "Marka: " << tablicaBatonow[2].marka << endl;
	cout << "Waga: " << tablicaBatonow[2].waga << endl;
	cout << "Kalorie: " << tablicaBatonow[2].kalorie << endl;

	return 0;
}
