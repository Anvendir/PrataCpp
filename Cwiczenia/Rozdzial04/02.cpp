// instr2.cpp -- przepisane na string
#include <iostream>
#include <string>

int main()
{
    using namespace std;
    string name;
    string dessert;

    cout << "Podaj swoje imie:\n";
    cin >> name;
    cout << "Podaj swoj ulubiony deser:\n";
    cin >> dessert;
    cout << "Mam dla ciebie " << dessert;
    cout << ", " << name << ".\n";
    return 0; 
}
