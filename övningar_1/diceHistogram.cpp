#include "diceHistogram.h"
using namespace std;

int main()
{
	int rolls;
	cout << "Write how many rolls you want" << endl;
	cin >> rolls;

	diceHistogram(rolls);


}

void diceHistogram(int rolls)
{
	int arr[6] = { 0 };
	srand(time(NULL));
	for (int i = 0; i < rolls; i++)
	{
		int random = rand() % 6 + 1;
		arr[random - 1] += 1;
		cout << random << endl;
	}

	string arrString[6];

	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < arr[j]; i++)
		{
			arrString[j] += "#";
		}
	}

	for (int i = 0; i < 6; i++)
	{
		cout << i + 1 << ": " <<arrString[i] << endl;
	}

}


