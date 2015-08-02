#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int lznakow = 0;

int main()
{
	cout << "Otweiram plik teksotwy" << endl;
	ifstream plik;
	plik.open("./text.txt");

	char ch;

	while (plik.get(ch) && !plik.eof())
	{
		if (!isspace(ch))
		{
			lznakow++;
		}
	}
	plik.close();
	cout << "Liczba znakow jest rowna: " << lznakow << endl;

	return 0;
}
