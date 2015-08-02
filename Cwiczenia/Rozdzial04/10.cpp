#include <iostream>
#include <array>

int main()
{
	using namespace std;
	array<float, 3> tabliceWynikow;

	cout << "Podaj pierwszy wynik: ";
	cin >> tabliceWynikow[0];

	cout << "Podaj drugi wynik: ";
	cin >> tabliceWynikow[1];

	cout << "Podaj trzeci wynik: ";
	cin >> tabliceWynikow[2];

	double srednia = (tabliceWynikow[0] + tabliceWynikow[1] + tabliceWynikow[2]) / 3;
	cout << "Srednia wynosi: " << srednia << endl;

	return 0;
}
