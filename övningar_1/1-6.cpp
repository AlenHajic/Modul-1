#include "1-6.h"
using namespace std;

int main()
{
	cardGame();
}

void cardGame()
{
	srand(time(NULL));
	string name;
	char answer = 'Y';
	int sum = 0;
	int currentNum;
	int points = 0;

	while (answer == 'Y')
	{

		currentNum = rand() % 13 + 1;
		sum += currentNum;
		cout << "You got the value: " << currentNum << " The sum is: " << sum << " Do you want to continue? (Y/N)" << endl;
		if (sum > 21)
		{
			cout << "Sorry " << name << " your sum excedeed 21" << endl;
			return;
		}
		else if (sum == 19)
		{
			answer = 'N';
		}
		else if (sum == 20)
		{
			answer = 'N';
		}
		else if (sum == 21)
		{
			answer = 'N';
		}
		cin >> answer;
	}
	while (answer == 'N')
	{
		if (sum == 19)
		{
			points = 5;
			cout << "Congratulations " << name << " you got " << points << " points" << endl;
			return;
		}
		else if (sum == 20)
		{
			points = 15;
			cout << "Congratulations " << name << " you got" << points << endl;
			return;
		}
		else if (sum == 21)
		{
			points = 50;
			cout << "Congratulations " << name << " you got" << points << endl;
			return;
		}
		
	}





	cout << "Input your name: " << endl;

}
