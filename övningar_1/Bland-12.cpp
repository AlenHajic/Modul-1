#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int findLowestIndex(int* array, int startIndex, int endIndex);

int main()
{
	srand(time(NULL));
	//int* array = new int[10];
	int array[10] = { 50,  40,  10,  60,  70,  80,  30,  10,  90,  40 };
	int startIndex = 3;
	int endIndex = 8;
	/*for (int i = 0; i < 10; i++)
	{
		array[i] = rand() % 100;
	}*/


	for (int i = 0; i < 10; i++)
	{
		cout << array[i] << endl;
	}

	cout << "Start index: " << startIndex << "End index: " << endIndex << "Lowest in this span: " << findLowestIndex(array, startIndex, endIndex) << endl;

	//delete[] array;

	return 0;
}

int findLowestIndex(int* array, int startIndex, int endIndex)
{
	int currentSmallest = startIndex;
	for (int i = startIndex + 1; i < endIndex; i++)
	{
		if (array[currentSmallest] > array[i]) currentSmallest = i;
	}

	return currentSmallest;
}
