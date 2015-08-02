#include <iostream>

using namespace std;

struct Inwestor
{
	string name;
	double kwota;
};

int main()
{
	cout << "Podaj liczbe wplacajacych: ";
	int lWplacajacych = 0;

	if ((cin >> lWplacajacych).good())
	{
		cin.get();
		Inwestor * tabInwestorow = new Inwestor[lWplacajacych];

		for (int i = 0; i < lWplacajacych; i++ )
		{
			cout << "Podaj dane dla inwestora nr: " << i + 1 << endl;
			cout << "Imie: ";
			getline(cin, tabInwestorow[i].name);
			
			cout << "Wplata: ";
			cin >> tabInwestorow[i].kwota;
			cin.get();
		}
		cout << endl;

		bool jestWS = false;
		bool jestS = false;
		cout << "Nasi wspaniali sponsorzy: " << endl;
		for (int i = 0; i < lWplacajacych; i++ )
		{
			if (tabInwestorow[i].kwota >= 10000.0)
			{
				jestWS = true;
				cout << tabInwestorow[i].name << endl;
			}
		}

		if (!jestWS)
		{
			cout << "brak" << endl;
		}

		cout << endl;

		cout << "Nasi sponsorzy: " << endl;
		for (int i = 0; i < lWplacajacych; i++ )
		{
			if (tabInwestorow[i].kwota < 10000.0)
			{
				jestS = true;
				cout << tabInwestorow[i].name << endl;
			}
		}

		if (!jestS)
		{
			cout << "brak" << endl;
		}
	}
	else
		cout << "Niepoprawna wartosc - koniec programu" << endl;

	return 0;
}
