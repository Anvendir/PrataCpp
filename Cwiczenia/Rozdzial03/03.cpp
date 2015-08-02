#include <iostream>

int main()
{
	using namespace std;

	const int sekundNaMinute = 60;
	const int minutNaStopien = 60;

	cout << "Podaj dlugosc w stopniach minutach i sekundach" << endl;

	int stopnie, minuty, sekundy;

	cout << "Stopnie: ";
	cin >> stopnie;

	cout << "Minuty: ";
	cin >> minuty;

	cout << "Sekundy: ";
	cin >> sekundy;


	double stopnieTotal = stopnie + double (minuty) / minutNaStopien + double (sekundy) / sekundNaMinute / minutNaStopien;

	cout << stopnie << " stopni, " 
		 << minuty << " minut, " 
		 << sekundy << " sekund, "
		 << "= "<< stopnieTotal << " stopni." << endl;

	return 0;
}
