#include <iostream>

int main()
{
	using namespace std;
	const double przel = 2.54;

	cout << "Podaj wzrost w centymetrach" << endl;

	int wzrCen = 0;
	cin >> wzrCen;

	double wzrCale = wzrCen / przel;
	int wzrStopy = wzrCale / 12;
	int resztaCale = int (wzrCale) % 12;

	cout << "Wzrost to " << wzrStopy << "_" << resztaCale << endl;

	return 0;
}
