
#include <iostream>

struct Pizza
{
	char nazwa[30];
	float srednica;
	float waga;
};

int main()
{
	using namespace std;

	Pizza * pizza1 = new Pizza;

	cout << "Podaj srednice pizzy: ";
	cin >> pizza1->srednica;

	cout << "Podaj nazwe pizzy: ";
	cin.get();
	cin.getline(pizza1->nazwa, 30);

	cout << "Podaj wage pizzy: ";
	cin >> pizza1->waga;

	cout << "Nazwa pizzy to: " << pizza1->nazwa << endl;
	cout << "Srednica pizzy to: " << pizza1->srednica << endl;
	cout << "Waga pizzy to: " << pizza1->waga << endl;

	delete [] pizza1;
	
	return 0;
}
