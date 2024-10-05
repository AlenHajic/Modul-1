#include <iostream>
#include <stdexcept>
using namespace std;

void addPerson(string name, int year, string* names, int* birthYears, int &counter);
void showList(string* names, int* birthYears, int counter);
int findBirthYear(string* names, int* birthYear, int counter);

int main()
{
	int size = 0;
	int counter = 0;
	cout << "How long hsould the list of people be?" << endl;
	cin >> size;
	string* names = new string[size];
	int* birthYears = new int[size];

	addPerson("alen", 2004, names, birthYears, counter);
	addPerson("hasan", 1941, names, birthYears, counter);
	showList(names, birthYears, counter);
	findBirthYear(names, birthYears, counter);
}

//A
void addPerson(string name, int year, string* names, int* birthYears, int &counter)
{
	names[counter] = name;
	birthYears[counter] = year;
	counter++;
}

//B
void showList(string* names, int* birthYears, int counter)
{
	cout << "List of people(name + year): " << endl;
	for (int i = 0; i < counter; i++)
	{
		cout << names[i] << " " << birthYears[i] << endl;
	}
}

int findBirthYear(string* names, int* birthYear, int counter)
{
	string name;
	cout << "Who do you want to find?" << endl;
	cin >> name;

	for (int i = 0; i < counter; i++)
	{
		if (names[i] == name) return birthYear[i];
	}
	
	throw runtime_error("name not found");
	return -1;
}

//C 
