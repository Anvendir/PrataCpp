#include <iostream>

using namespace std;

void showMenu();

int main()
{
	showMenu();
	char ch;

	do
	{
		cout << "Prosze podac litere r, p, t lub g: "; 
	} while (cin.get(ch).get() && !(ch == 'r' || ch == 'p' || ch == 'd' || ch == 'g'));

	switch (ch)
	{
	case 'r':
		cout << "Krowa jest roslinozerca" << endl;
		break;
	case 'p':
		cout << "Chopin jest pianista" << endl;
		break;
	case 'd':
		cout << "Klon jest drzewem" << endl;
		break;
	case 'g':
		cout << "Chinczyk to gra" << endl;
		break;
	} 
}

void showMenu()
{
	cout << "r) roslinozerca        b) pianista\n"
		 << "d) drzewo              g) gra\n";
}
