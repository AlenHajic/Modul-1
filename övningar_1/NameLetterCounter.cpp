#include "NameLetterCounter.h"
using namespace std;

int main()
{
	string firstN;
	string lastN;
	cout << "Write your first name" << endl;
	cin >> firstN;
	cout << "Write your last name" << endl;
	cin >> lastN;

	int decider = NameLetterCounter(firstN, lastN);

	if (decider == 1)  cout << "Your firstname is as long as your lastname" << endl;
	if (decider == 2)  cout << "Your firstname is shorter than your lastname" << endl; 
	if (decider == 3) cout << "Your firstname is longer than your lastname" << endl; 

	if (decider == -1) cout << "error" << endl;
}

int NameLetterCounter(string firstN, string lastN)
{
	int firstNCounter = 0;
	int lastNCounter = 0;

	for (char i : firstN)
	{
		firstNCounter++;
	}

	for (char i : lastN)
	{
		lastNCounter++;
	}

	if (firstNCounter == lastNCounter) return 1;
	if (firstNCounter < lastNCounter) return 2;
	if (firstNCounter > lastNCounter) return 3;

	return -1;
}
