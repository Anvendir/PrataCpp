#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	cout << "Podaj wysokosc swoich zarobkow, a ja podam nalezny podatek" << endl;
	int zarobki;
	char ch;

	if ((cin >> zarobki).good() && zarobki >= 0)
	{
		float op[4] = {0.0, 0.1, 0.15, 0.2};
		int kwotyOp[4] = {5000, 10000, 20000, 35000};
		float podatek = 0.0;
		int podstawaPodatku = zarobki;

		for (int i = 0; i < 4; i++)
		{
			if (podstawaPodatku > kwotyOp[i])
			{
				podatek += op[i] * kwotyOp[i]; 
				podstawaPodatku -= kwotyOp[i];
			}
			else
			{
				podatek += podstawaPodatku * op[i];
				cout << podatek << endl;
				break;
			}
		}

		cout << "Podatek od kwoty " << zarobki
			 << " wynosi: " << podatek << " tearpow"
			 << endl;
	}
	else
	{
		cout << "Podano niepoprawne dane" << endl;
	}

	return 0;
}
