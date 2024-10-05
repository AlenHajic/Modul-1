#include "F-3.h"
#include <iostream>
using namespace std;


int main()
{
	int one = 1;
	int two = 2;

	swappingValues(one, two);

	return 0; // Add a return statement for good practice
}

void swappingValues(int& one, int& two)
{
	cout << "Values before swap" << endl;
	cout << "Int 1: " << one << endl;
	cout << "Int 2: " << two << endl;

	int temp = one;
	one = two;
	two = temp;

	cout << "Values after swap" << endl;
	cout << "Int 1: " << one << endl;
	cout << "Int 2: " << two << endl;
}
