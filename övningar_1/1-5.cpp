#include "1-5.h"
using namespace std;

int main()
{
    diceGame();
}

void diceGame()
{
    srand(time(NULL));
    int gameGuess = rand() % 10 + 1;
    int gameCounter = 0;
    int playerGuess;
    int playerCounter = 0;
    cout << "The dice will be rolled 10 times, my guess will be: " << gameGuess  << " What is your guess? "  << endl;
    cin >> playerGuess;
    cout << "Generated numbers: " << endl;

    for(int i = 0; i < 10; i++)
    {
        int currentGuess = rand() % 10 + 1;
        cout << currentGuess << endl;
        if(currentGuess == gameGuess)
        {
            gameCounter++;
        }
        else if (currentGuess == playerGuess)
        {
            playerCounter++;
        }
    }
    
    cout << "You got " << playerCounter << "hit(s)" << endl;
    cout << "You got " << gameCounter << "hit(s)" << endl;
    
}
