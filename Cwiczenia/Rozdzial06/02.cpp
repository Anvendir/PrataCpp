#include <iostream>

using namespace std;

int main()
{
	cout << "Program odczytujacy do 10 datkow,"
		 << " pierwsza wartosc nieliczbowa konczy wczytywanie liczb"
		 << endl;

	double datki[10];
	int i = 0;

	while (cin >> datki[i] && i < sizeof(datki))
	{
		i++;
	}

	double suma = 0;
	for (int j = 0; j <= i; j++)
	{
		suma += datki[j];
	}

	double srednia = suma / i ;

	cout << "Srednia wynosi: " << srednia << endl;
	cout << "Wartosci wieksze od sredniej: ";

	for (int j = 0; j <= i; j++)
	{
		if (datki[j] > srednia)
			cout << datki[j] << " ";
	}
	cout << endl;

	return 0;
}
