#include "3-1.h";
using namespace std;

int main()
{
    cout << strings() << endl;

    return 0;
}

string strings()
{
    string word1;
    string word2;

    cout << "Write your first word" << endl;
    cin >> word1;

    cout << "Write your second word" << endl;
    cin >> word2;

    string mergeString = word1 + ' ' + word2;

    return mergeString;
}
