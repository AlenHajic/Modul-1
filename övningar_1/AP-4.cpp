#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int fillArray(int* array, int size);

int main()
{
	int size = 0;
	cout << "How big should the array be ?" << endl;
	cin >> size;
	int* array = new int[size];

	cout << "Number of elements lower than 500: " << fillArray(array, size) << endl;

	delete[] array;
}

int fillArray(int* array, int size)
{
	srand(time(NULL));
	int currentNum = 0;
	int counter = 0;
	for (int i = 0; i < size; i++)
	{
		currentNum = rand() % 1000;
		array[i] = currentNum;
		if (currentNum < 500) counter++;
	}

	return counter++;
}
