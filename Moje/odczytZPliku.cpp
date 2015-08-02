#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::endl;
using std::ifstream;

int main()
{
	cout << "Program do odczytu danych.\nPodaj sciezke do pliku." << endl;
	char tablica[100];
	cin >> tablica;

	ifstream inputFile;
	inputFile.open(tablica);

	std::string jednaLinia;
	std::string tekstZPliku;

	while (inputFile.good())
	{
		getline(inputFile, jednaLinia);
		tekstZPliku += jednaLinia; 
	}

	cout << tekstZPliku << endl;
	inputFile.close();

	cout << "Koniec programu" << endl;

	return 0;
}
