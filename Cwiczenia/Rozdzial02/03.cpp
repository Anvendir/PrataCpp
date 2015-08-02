#include <iostream>

void ent();
void czer();

int main()
{
	ent();
	ent();
	czer();
	czer();

	return 0;
}

void ent()
{
	using namespace std;
	cout << "Entliczek pentliczek" << endl;
}

void czer()
{
	using std::cout;
	using std::endl;
	cout << "Czerwony stoliczek" << endl;
}
