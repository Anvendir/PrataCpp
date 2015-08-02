#include <iostream>

int main()
{
	using namespace std;

	const short lmwr = 12;
	const short lata = 3;
	const char * miesiace[lmwr] = {"Styczen",
								   "Luty",
								   "Marzec",
								   "Kwiecien",
								   "Maj",
								   "Czerwiec",
								   "Lipiec",
								   "Sierpien",
								   "Wrzesien",
								   "Pazdziernik",
								   "Listopad",
								   "Grudzien"};

	int sprzedaz[lata][lmwr] = {{0}};
	
	for (int j = 0; j < lata ; ++j)
	{
		for (int i = 0; i < lmwr; ++i) 
		{
			cout << "Podaj sprzedaz za rok: " << j+1 << " miesiac "
				 << miesiace[i] << ": ";

			cin >> sprzedaz[j][i];
		}
	}

	int sprzedazRoczna[lata] = {0};

	for (int j = 0; j < lata; ++j)
	{
		for (int i = 0; i < lmwr; ++i) 
		{
			sprzedazRoczna[j] += sprzedaz[j][i];
		}

		cout << "Sprzedaz w roku " << j + 1 << " wynosi: "
			 << sprzedazRoczna[j] << endl;
	}

	int sprzedazTotal = 0;
	for (int i = 0; i < lata; i++)
	{
		sprzedazTotal += sprzedazRoczna[i];
	}

	cout << "Sprzedaz za 3 lata wynosi " << sprzedazTotal << endl;

	return 0;
}
