#include <iostream>
#include <fstream>

using std::cout;
using std::cin;
using std::endl;
using std::ofstream;

int main()
{
	cout << "Program do zapisu danych.\nPodaj sciezke do pliku." << endl;
	char tablica[100];
	cin >> tablica;

	ofstream outFile;
	outFile.open(tablica);

	outFile << "Nazwa pliku: "
			<< tablica << endl;

	outFile << "Jakis tam sobie tekst" << endl;
	outFile.close();

	cout << "Koniec programu" << endl;

	return 0;
}
