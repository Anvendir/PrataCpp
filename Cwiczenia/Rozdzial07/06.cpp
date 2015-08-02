#include <iostream>

using namespace std;

int fill_array(double tab[], int iloscElem);
void show_array(double tab[], int iloscElem);
void reverse_array(double tab[], int iloscElem);

int main()
{
	const int w = 10;
	double tablica[w];

	int rzeczWielkosc = fill_array(tablica, w);
	show_array(tablica, rzeczWielkosc);
	reverse_array(tablica, rzeczWielkosc);
	cout << endl;
	show_array(tablica, rzeczWielkosc);
	

	return 0;
}

int fill_array(double tab[], int iloscElem)
{
	double temp;
	int i = 0;
	while ((cin >> temp) && i < iloscElem)
	{
		tab[i] = temp;
		i++;
	}

	return i;
}

void show_array(double tab[], int iloscElem)
{
	for (int i = 0; i < iloscElem; i++)
	{
		cout << "Element " << i + 1 << ": "
			 << tab[i] << endl;
	}
}

void reverse_array(double tab[], int iloscElem)
{
	double temp[iloscElem];

	for (int i = 0; i < iloscElem; i++)
	{
		temp[i] = tab[iloscElem - i - 1];
	}

	for (int i = 0; i < iloscElem; i++)
	{
		tab[i] = temp[i];
	}
}
