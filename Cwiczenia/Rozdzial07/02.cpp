#include <iostream>

void getResults(int p_results[], int * p_numOfRec);
double evalAverage(const int p_results[], const int * p_numOfRec);
void printResults(const int p_results[], const int * p_numOfRec);

int main()
{
	int results[10];
	int numberOfRecords = 0;

	getResults(results, &numberOfRecords);
	std::cout << numberOfRecords << std::endl;
	printResults(results, &numberOfRecords);

	return 0;
}

void getResults(int p_results[], int * p_numOfRec)
{
	using namespace std;
	cout << "Podaj 10 wynikow golfowych, liczba ujemna konczy wprowadzanie danych" << endl;
	int temp;

	for (int i = 0; i < 10; i++)
	{
		cout << "Podaj wynik nr " << i + 1 << " : ";
		cin >> temp;

		if (temp < 0)
			break;

		p_results[i] = temp;
		(*p_numOfRec)++;
	}
} 

double evalAverage(const int p_results[], const int * p_numOfRec)
{
	int suma = 0;
	for (int i = 0; i < *p_numOfRec; i++)
	{
		suma += p_results[i];
	}

	return suma / *p_numOfRec;
}

void printResults(const int p_results[], const int * p_numOfRec)
{
	using namespace std;
	
	for (int i = 0; i < *p_numOfRec; i++)
	{
		cout << i + 1 << ": "
			 << p_results[i] << " ";
	}

	cout << endl;
	cout << "Srednia wynosi: " << evalAverage(p_results, p_numOfRec) << endl;
}
