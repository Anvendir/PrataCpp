#include <iostream>
#include <cstring>

int main()
{
	using namespace std;

	cout << "Podaj imie: ";
	char imie[30];
	cin.getline(imie, 30);

	cout << "Podaj nazwisko: ";
	char nazwisko[30];
	cin.getline(nazwisko, 30);

	char napis[70];
	strcat(strcat(strcpy(napis, nazwisko), ", "), imie);

	cout << "Oto informacje zestawione w jeden napis: " << napis << endl;

	return 0;
}
