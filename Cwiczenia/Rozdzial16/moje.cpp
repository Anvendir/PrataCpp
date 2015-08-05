#include <iostream>
#include <vector>
#include <memory>
#include <algorithm>

using namespace std;

int main()
{
	unique_ptr<string> s1(new string);
	*s1 = string("Pierwszy");
	unique_ptr<string> s2 = make_unique<string>("Drugi");

//	s1 = move(s2);

	cout << "1: " << *s1 << endl;
	cout << "2: " << *s2 << endl;

	vector<double> wek = {10.0, 2.0, 14.0, 6.0};
	cout << wek.size() << endl;

	vector<double>::iterator it = wek.begin();
	cout << *it << endl;

	for(it = wek.begin(); it != wek.end(); it++)
		cout << *it << endl;

	cout << endl;
	for (double liczba: wek)
		cout << liczba << endl;

	cout << endl;
	sort(wek.begin(), wek.end());
	for (auto it = wek.begin(); it != wek.end(); ++it)
		cout << *it << endl;


	cout << "Algorytm sort() STL z zwykla tablica" << endl;
	int tablica[13] = {2, 45, 23, 231, 32, 23, 123, 23, 213, 32323, 1, 32, 32};
	sort(tablica, tablica + 13);

	for (int el: tablica)
		cout << el << endl;

	cout << "Przyklad uzycia wektora" << endl;
	vector<int> w;
	w.push_back(2);
	w.push_back(1);
	cout << w.value_type << endl;

	return 0;
}
