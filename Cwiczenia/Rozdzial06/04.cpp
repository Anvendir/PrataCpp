#include <iostream>

using namespace std;

const int strSize = 100;
struct zpdw
{
	char imie[strSize];
	char stanowsiko[strSize];
	char psuedonim[strSize];
	int preferencje;
};

void showMenu();
void showNames(const zpdw * p_listaCzlonkow);
void showPositions(const zpdw * p_listaCzlonkow);
void showNickNames(const zpdw * p_listaCzlonkow);
void showByPreferences(const zpdw * p_listaCzlonkow);

int main()
{
	zpdw listaCzlonkow[5] =
	{
		{"Wimp Macho", "Starszy programista", "Wimp", 0},
		{"Raki Rhodes", "Mlodszy programista", "Raki", 1},
		{"Celia Laiter", "Ksiegowa", "MIPS", 2},
		{"Hoppy Hipman", "Szkoleniowiec analitykow", "Hipman", 1},
		{"Pat Hand", "Regular programista", "LOOPY", 2}
	};

	showMenu();
	char ch;
	bool isEnd = false;

	cout << "Wybierz jedna z opcji: " << endl;
	while (cin.get(ch).get())
	{
		switch (ch)
		{
		case 'a':
			showNames(listaCzlonkow);
			break;
		case 'b':
			showPositions(listaCzlonkow);
			break;
		case 'c':
			showNickNames(listaCzlonkow);
			break;
		case 'd':
			showByPreferences(listaCzlonkow);
			break;
		case 'q':
			cout << "Do zobaczenia" << endl;
			isEnd = true;
		}

		if (isEnd == true)
			break;

		cout << "Wybierz jedna z opcji: " << endl;
	}

	return 0;
}

void showMenu()
{
	cout << "Zakon programistow dobrej woli" << endl;
	cout << "a. lista wg imion          b. lista wg stanowisk\n"
		 << "c. lista wg pseudonimow    d. lista wg preferencji\n"
		 << "q. koniec\n";
}

void showNames(const zpdw * p_listaCzlonkow)
{
	for (int i = 0; i < 5; i++)
	{
		cout << p_listaCzlonkow[i].imie << endl;
	}
}

void showPositions(const zpdw * p_listaCzlonkow)
{
	for (int i = 0; i < 5; i++)
	{
		cout << p_listaCzlonkow[i].stanowsiko << endl;
	}
}

void showNickNames(const zpdw * p_listaCzlonkow)
{
	for (int i = 0; i < 5; i++)
	{
		cout << p_listaCzlonkow[i].psuedonim << endl;
	}
}

void showByPreferences(const zpdw * p_listaCzlonkow)
{
	for (int i = 0; i < 5; i++)
	{
		switch (p_listaCzlonkow[i].preferencje)
		{
		case 0:
			cout << p_listaCzlonkow[i].imie << endl;
			break;
		case 1:
			cout << p_listaCzlonkow[i].stanowsiko << endl;
			break;
		case 2:
			cout << p_listaCzlonkow[i].psuedonim << endl;
			break;
		default:
			cout << "Nieznana preferencja" << endl;
		}
	}

}
