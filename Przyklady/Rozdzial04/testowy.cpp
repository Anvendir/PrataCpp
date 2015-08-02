#include <iostream>
#include <cstring>

using namespace std;

void funkcja1(const char tablica[]);

int main()
{
	cout << "Dlugosc lancucha to: " << strlen("Jakis tam string") << endl;
	funkcja1("Jakis tam string");

	return 0;
}

void funkcja1(const char tablica[3])
{
	cout << tablica << endl;
}
