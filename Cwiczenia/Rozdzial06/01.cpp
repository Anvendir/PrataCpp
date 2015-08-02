#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	cout << "Wczytuje dane z klawiatury: " << endl;
	char ch;
	string tekst;

	while (cin.get(ch) && ch != '@')
	{
		if (islower(ch))
			ch = toupper(ch);
		else if (isupper(ch))
			ch = tolower(ch); 

		if (!isdigit(ch))
			tekst += ch;
	}

	cout << "Wczytane dane: "
		 << tekst << endl;

	return 0;
}
