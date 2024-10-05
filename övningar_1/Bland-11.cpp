#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

bool checkArrayIfSorted(int* array, int nrOf);

int main()
{
	srand(time(NULL));
	int nrOf = 10;
	int* array = new int[nrOf];

	//Skapar en sorterad array;
	for (int i = 0; i < nrOf; i++)
	{
		array[i] = i;
	}

	//Skapar en randomizad array som är osoroterad
	/*for (int i = 0; i < nrOf; i++)
	{
		array[i] = rand() % 100;
	}*/

	for (int i = 0; i < nrOf; i++)
	{
		cout << array[i] << endl;
	}

	if (checkArrayIfSorted(array, nrOf)) cout << "true";
	else cout << "false" << endl;

	delete[] array;

	return 0;
}

bool checkArrayIfSorted(int* array, int nrOf)
{
	int previous = 0;

	for (int i = 1; i < nrOf; i++)
	{
		previous = i - 1;
		if (array[previous] > array[i]) return false;
	}

	return true;
}



