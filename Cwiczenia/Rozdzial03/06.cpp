#include <iostream>

int main()
{
	using namespace std;
	const double mileNaKm = 1.609344;
	const double galonNaLitr = 3.78541178;

	cout << "Ile przejechano mil? ";
	double mil;
	cin >> mil;

	cout << "Ile galonow benzyny zuzyto? ";
	double galony;
	cin >> galony;

	cout << "Ile galonow jeszcze zostalo? ";
	double galonyLeft;
	cin >> galonyLeft;

	double kmPrzej = mil * mileNaKm;
	double litrSpal = galony * galonNaLitr;

	double kmDoPrzej = (kmPrzej * galonyLeft * galonNaLitr) / litrSpal;

	cout << "Przejechano juz " << kmPrzej << " kilometrow." << endl;
	cout << "Spalono juz " << litrSpal << " litrow benzyny." << endl;
	cout << "Mozesz przejechac jeszcze " << kmDoPrzej << " kilometrow." << endl;

	return 0;
}
