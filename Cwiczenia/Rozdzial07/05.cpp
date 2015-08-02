#include <iostream>

using namespace std;

long long factorial(int p_liczba);

int main()
{
	cout << "Podaj liiczbe dla ktorej chcesz policzyc silnie" << endl;
	int liczba;

	while (cin >> liczba)
	{
		cout << factorial(liczba) << endl;
		cout << "Podaj kolejna liczbe, q zeby wyjsc" << endl;
	}
	return 0;
}

long long factorial(int p_liczba)
{
	long long silnia = 0;

	if (p_liczba == 0)
		return 1L;

	silnia += p_liczba * factorial(p_liczba - 1);
	return silnia;
}
