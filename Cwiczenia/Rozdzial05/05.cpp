#include <iostream>

int main()
{
	using namespace std;

	const char lmwr = 12;
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
	int sprzedaz[lmwr] = {0};
	
	for (int i = 0; i < lmwr; ++i)
	{
		cout << "Podaj sprzedaz za miesiac "
			 << miesiace[i] << ": ";

		cin >> sprzedaz[i];
	}

	int sprzedazRoczna = 0;
	for (int i = 0; i < lmwr; ++i)
	{
		sprzedazRoczna += sprzedaz[i];
	}

	cout << "Roczna sprzedaz wynosi: " << sprzedazRoczna << endl;

	return 0;
}
