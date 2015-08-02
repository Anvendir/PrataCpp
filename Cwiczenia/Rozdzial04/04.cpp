#include <iostream>
#include <string>

int main()
{
	using namespace std;

	cout << "Podaj imie: ";
	string imie;
	cin >> imie;

	cout << "Podaj nazwisko: ";
	string nazwisko;
	cin >> nazwisko;

	string napis = nazwisko + ", " + imie;
	cout << "Oto informacje zestawione w jeden napis: " << napis << endl;

	return 0;
}
