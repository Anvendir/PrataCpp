#include <iostream>

using namespace std;

int main()
{
	char ch;

	cout << "Pisz, a ja bede powtarzac.\n";
	cin.get(ch);

	while (ch != '.')
	{
		if (ch == '\n')
			cout << ch;
		else
			cout << ch+1;

		std::cin.get(ch);
	}

	int x = -4;
	x >= 0 ? x = x : x = -x;
	cout << x;

	return 0;
}
