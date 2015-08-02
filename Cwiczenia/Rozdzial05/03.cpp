#include <iostream>

int main()
{
	using namespace std;

	char ch = '\0', ch1;

	while (ch != '0')
	{
		cout << "Wyswietlam: " << ch << endl;
		cin.get(ch).get();
	}

	return 0;
}
