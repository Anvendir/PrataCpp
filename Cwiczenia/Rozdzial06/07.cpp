#include <iostream>
#include <cctype>

using namespace std;

int main()
{
	string odczyt;
	int startSam = 0;
	int startSp = 0;
	int slow = 0;

	cout << "Podawaj slowa (pojedyncze q konczy)" << endl;
	while (true)
	{
		cin >> odczyt;
		if (odczyt == "q")
			break;
		slow++; 

		if (isalpha(odczyt[0]))
		{
			switch (odczyt[0])
			{
			case 'a':
				startSam++;
				break;
			case 'A':
				startSam++;
				break;
			case 'e':
				startSam++;
				break;
			case 'E':
				startSam++;
				break;
			case 'i':
				startSam++;
				break;
			case 'I':
				startSam++;
				break;
			case 'o':
				startSam++;
				break;
			case 'O':
				startSam++;
				break;
			case 'u':
				startSam++;
				break;
			case 'U':
				startSam++;
				break;
			case 'y':
				startSam++;
				break;
			case 'Y':
				startSam++;
				break;
			default:
				startSp++;
			}
		}
	}

	cout << startSp << " slow zaczyna sie od spolglosek" << endl;
	cout << startSam << " slow zaczyna sie od samoglosek" << endl;
	cout << slow - startSp - startSam << " slow nie zaliczna sie do zandej z tych kategorii" << endl;

	return 0;
}
