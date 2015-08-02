#include <iostream>

struct pudlo
{
	char producent[40];
	float wysokosc;
	float szerokosc;
	float dlugosc;
	float objetosc;
};

void passByValue(pudlo p_pud);
void passByPointer(pudlo * p_pud);

int main()
{
	pudlo p1 = { "Alfa",
				 100.0,
				 50.0,
				 1500.0,
				 1000.0 };
	
	passByValue(p1);
	passByPointer(&p1);

	std::cout << "Nowa objetosc: " << p1.objetosc << std::endl;

	return 0;
}

void passByValue(pudlo p_pud)
{
	using namespace std;

	cout << "Zawartosc struktury przekazana przez wartosc" << endl;
	cout << "Producent: " << p_pud.producent << endl;
	cout << "Wysokosc: " << p_pud.wysokosc << endl;
	cout << "Szerokosc: " << p_pud.szerokosc << endl;
	cout << "Dlugosc: " << p_pud.dlugosc << endl;
	cout << "Objetosc: " << p_pud.objetosc << endl;
}

void passByPointer(pudlo * p_pud)
{
	p_pud->objetosc = p_pud->dlugosc * p_pud->szerokosc * p_pud->wysokosc;
}
