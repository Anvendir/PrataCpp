#include <iostream>

int main()
{
	using namespace std;

	float opDafne = 0.1;
	float opCleo = 0.05;
	float kapPocz = 100.00;
	float kapC = kapPocz, kapD = kapPocz;
	float zyskD = 0.0, zyskC = 0.0;
	int i;

	for (i = 0; kapC <= kapD; ++i)
	{
		zyskD = kapPocz * opDafne;
		kapD += zyskD;

		zyskC = kapC * opCleo;
		kapC += zyskC;
	}

	cout << "Kapital Cleo przekroczy zysk Dafne po " << i << " latach, i wyniesie: " 
		 << kapC << " podczas gdy kapital Dafne wynosi " << kapD << endl;

	return 0;
}

