#include "2-3.h"
using namespace std;

int main()
{
	stringMix();

}

void stringMix()
{
	string* arr = new string[10];
	string numbers[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		arr[i] = numbers[i];
	}

	for (int i = 0; i < 10; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		string temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i] << endl;
	}

	delete[] arr;

}
