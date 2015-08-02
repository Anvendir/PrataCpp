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

	Batonik snacks = {"Mocha Munch", 2.3, 350};

	cout << "Marka: " << snacks.marka << endl;
	cout << "Waga: " << snacks.waga << endl;
	cout << "Kalorie: " << snacks.kalorie << endl;

	return 0;
}
