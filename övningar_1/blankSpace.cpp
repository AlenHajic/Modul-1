#include "blankSpace.h"
using namespace std;

int main()
{
    string text = "hejsan på dig";

    cout << blankSpaces(text) << endl;

}

int blankSpaces(string text)
{
    int letterCounter = text.size();
    int blankSpaceCounter = 0;
    char blankS = ' ';

    for (int i = 0; i < letterCounter; i++)
    {
        if (text[i] == blankS)
        {
            blankSpaceCounter++;
        }
        
    }
    return blankSpaceCounter;
}
