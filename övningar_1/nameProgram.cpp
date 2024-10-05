#include <iostream>
using namespace std;

int main()
{
	string firstName;
	string lastName;

	cout << "What is your first name?" << endl;
	cin >> firstName;
	int firstCounter = firstName.size();

	cout << "What is your last name?" << endl;
	cin >> lastName;
	int lastCounter = lastName.size();

	if (firstCounter > lastCounter)
	{
		cout << "Your name is " << firstName << " " << lastName << " ,your first name is longer than your last name" << endl;
	}
	else if (lastCounter > firstCounter)
	{
		cout << "Your name is " << firstName << " " << lastName << " ,your last name is longer than your first name" << endl;
	}
	else
	{
		cout << "Your name is " << firstName << lastName << ", your first and last name are both as long as eachother" << endl;
	};
}

