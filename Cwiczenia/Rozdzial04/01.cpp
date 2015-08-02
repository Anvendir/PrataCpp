#include <iostream>

int main()
{
	using namespace std;
	
	cout << "Jak masz na imie? ";
	char imie[30];
	cin.getline(imie, 30);

	cout << "Jak sie nazywasz? ";
	char nazwisko[30];
	cin.getline(nazwisko, 30);

	cout << "Na jaka ocene zaslugujesz? ";
	int ocena;
	cin >> ocena;

	cout << "Ile masz lat? ";
	int wiek;
	cin >> wiek;

	cout << "Nazwisko: " << nazwisko
		 << ", " << imie << endl;
	cout << "Ocena: " << ocena - 1 << endl;
	cout << "Wiek: " << wiek << endl;

	return 0;
}
