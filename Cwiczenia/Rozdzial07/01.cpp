#include <iostream>

using namespace std;

double getHarmAverage(int p_l1, int p_l2);

int main()
{
	cout << "Podaj dwie liczby, jesli choc jedna jest zerem program sie konczy" << endl;
	int l1, l2;

	do
	{
		cout << "Podaj pierwsza liczbe: ";
		cin >> l1;
		cout << "Podaj druga liczbe: ";
		cin >> l2;

		cout << "Srednia harmoniczna wynosi: "<<
				getHarmAverage(l1, l2) << endl;
	} while (l1 != 0 && l2 != 0);

	return 0;
}

double getHarmAverage(int x, int y)
{
	return (2.0 * x * y) / (x + y);
}
