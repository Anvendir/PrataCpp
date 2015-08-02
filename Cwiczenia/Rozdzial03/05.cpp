#include <iostream>

int main()
{
	using namespace std;

	cout << "Podaj liczbe ludnosci swiata: ";
	long long ludziSwiat;
	cin >> ludziSwiat;

	cout << "Podaj liczbe ludnosci Polski: ";
	long long ludziPolska;
	cin >> ludziPolska;

	float procent = ludziPolska * 100.0 / ludziSwiat;
	cout << "Populacja Polski stanowi " << procent << " populacji Swiata." << endl;

	return 0;
}
