#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void randomize(string* array);

int main()
{
	const string words[] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	string* array = new string[10];

	for (int i = 0; i < 10; i++)
	{
		array[i] = words[i];
	}
	cout << "Original: " << endl;
	for (int i = 0; i < 10; i++) cout << array[i] << endl;

	randomize(array);

	cout << "New array: " << endl;
	for (int i = 0; i < 10; i++) cout << array[i] << endl;

	delete[] array;
}

void randomize(string* array)
{
	srand(time(NULL));
	int first = 0;
	int second = 0;
	for (int i = 0; i < 10; i++)
	{
		first = rand() % 10;
		second = rand() % 10;

		swap(array[first], array[second]);
	}
}
