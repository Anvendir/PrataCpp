#include <iostream>

long double probability(unsigned numbers, unsigned picks, unsigned powerNumbers);
int main()
{
    using namespace std;
    double total, choices, powerBall;
    cout << "Podaj najwieksza liczbe, jaka mozna wybrac, oraz\n"
            "liczbe skreslen oraz najwieszka liczbe z powerBall:\n";
    while ((cin >> total >> choices >> powerBall) && choices <= total)
    {
        cout << "Szansa wygranej to jeden do ";
        cout << probability(total, choices, powerBall);
        cout << ".\n";
        cout << "Nastepne dwie liczby (q, aby zakonczyc): ";
    }
    cout << "do widzenia\n";
    return 0;
}

long double probability(unsigned p_numbers, unsigned p_picks, unsigned p_powerNumbers)
{
    long double basicResult = 1.0;
	long double powerResult = 1.0;
    long double n;
    unsigned p;

    for (n = p_numbers, p = p_picks; p > 0; n--, p--)
        basicResult = basicResult * n / p ; 

	for (n = p_powerNumbers, p = 1; p > 0; n--, p--)
		powerResult = powerResult * n / p;

	return basicResult * powerResult;
}
