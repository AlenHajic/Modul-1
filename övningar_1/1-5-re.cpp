#include "1-5.h"
using namespace std;

int main()
{
	diceGame();
}

void diceGame()
{
	srand(time(NULL));
	int aiGuess = rand() % 6 + 1;
	int playerGuess = 0;
	int currentRoll = 0;
	int aiHits = 0;
	int playerHits = 0;
	cout << "The die will be rolled 10 times, " << "my guess is: " << aiGuess << " What is your guess?" << endl;
	cin >> playerGuess;

	for (int i = 0; i < 10; i++)
	{
		currentRoll = rand() % 6 + 1;
		cout << currentRoll << endl;
		if (currentRoll == aiGuess) aiHits++;
		else if (currentRoll == playerGuess) playerHits++;
	}

	cout << "Your hit(s): " << playerHits << endl;
	cout << "My hit(s): " << aiHits << endl;

	if (aiHits > playerHits) cout << "I won" << endl;
	if (aiHits < playerHits) cout << "You won" << endl;
	if (aiHits == playerHits) cout << "It's a tie" << endl;
}