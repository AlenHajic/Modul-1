#include "F-1.h"
using namespace std;

int main()
{
    string one = "Jag heter";
    string two = "Alen Hajic!";

    cout << combineStrings(one, two) << endl;

}

string combineStrings(string one, string two)
{
    string returning;
    returning += one;
    returning += " ";
    returning += two;
    return returning;
}
