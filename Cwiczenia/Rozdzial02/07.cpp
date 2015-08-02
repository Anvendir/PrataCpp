#include <iostream>

void czas(int p_h, int p_m);

int main()
{
	int godziny, minuty;

	std::cout << "Podaj liczbe godzin: ";
	std::cin >> godziny;

	std::cout << "Podaj liczbe minut: ";
	std::cin >> minuty;

	czas(godziny, minuty);

	return 0;
}

void czas(int p_h, int p_m)
{
	using namespace std;
	cout << p_h << ":" << p_m << endl;
}
