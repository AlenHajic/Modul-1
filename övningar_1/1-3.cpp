#include "1-3.h"
using namespace std;

int main()
{
    string text;

    cout << "Write a sentence and see how many words it contains" << endl;
    cin >> text;

    cout << "Your sentence contained: " << countingWords(text) << " words" << endl;

    
}

int countingWords(string text)
{
    char blankS = ' ';
    int letterCounter = text.size();
    int blankSpaceCounter = 0;

    if (letterCounter == 0)
    {
        return 0;
    }

    for (int i = 0; i < letterCounter; i++)
    {
        if (text[i] == blankS)
        {
            blankSpaceCounter++;
        }
    }
    return blankSpaceCounter + 1;
}
