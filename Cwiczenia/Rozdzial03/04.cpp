#include <iostream>

int main()
{
	using namespace std;

	const int sekundNaMinute = 60;
	const int minutNaGodzine = 60;
	const int godzinNaDobe = 24;

	cout << "Podaj liczbe sekund: " << endl;

	long long totalSekundy;

	cout << "Sekundy: ";
	cin >> totalSekundy;

	int sekundy = totalSekundy % sekundNaMinute;
	int totalMinuty = totalSekundy / sekundNaMinute;
    int minuty = totalMinuty % minutNaGodzine;
    int totalGodziny = totalMinuty / minutNaGodzine;
    int godziny = totalGodziny % godzinNaDobe;
    int dni = totalGodziny / godzinNaDobe;

	cout << totalSekundy << " sekund = " 
		 << dni << " dni, "
		 << godziny << " godzin, "
		 << minuty << " minut, "
		 << sekundy << " sekund.";
		
	cout << endl;  

	return 0;
}
