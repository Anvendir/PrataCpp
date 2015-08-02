#include <iostream>
#include <fstream>

using namespace std;

struct Inwestor
{
	string name;
	double kwota;
};

int main()
{
	cout << "Wczytuje plik" << endl;
	ifstream plik;
	plik.open("./donatorzy.txt");

	int lWplacajacych = 0;

	if ((plik >> lWplacajacych).good())
	{
		plik.get();
		Inwestor * tabInwestorow = new Inwestor[lWplacajacych];

		for (int i = 0; i < lWplacajacych; i++ )
		{
			getline(plik, tabInwestorow[i].name);
			plik >> tabInwestorow[i].kwota;
			plik.get();
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

	plik.close();

	return 0;
}
