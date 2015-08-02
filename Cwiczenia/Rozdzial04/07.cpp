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

	Pizza pizza1;

	cout << "Podaj nazwe pizzy: ";
	cin.getline(pizza1.nazwa, 30);

	cout << "Podaj srednice pizzy: ";
	cin >> pizza1.srednica;

	cout << "Podaj wage pizzy: ";
	cin >> pizza1.waga;

	cout << "Nazwa pizzy to: " << pizza1.nazwa << endl;
	cout << "Srednica pizzy to: " << pizza1.srednica << endl;
	cout << "Waga pizzy to: " << pizza1.waga << endl;
	
	return 0;
}
