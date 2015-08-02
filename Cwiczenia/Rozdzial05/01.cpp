#include <iostream>

int main()
{
	using namespace std;

	cout << "Podaj dwie liczby, pierwsza powinna byc mniejsza: " << endl;

	int l1, l2;
	cin >> l1;
	cin >> l2;

	int suma = 0;
	for (int i = l1; i <= l2; i++)
	{
		suma += i;
	}

	cout << "Suma liczba od " << l1 << " do " << l2 << " wynosi " << suma << endl;

	return 0;
}
