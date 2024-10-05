#include "2-2.h"
using namespace std;

int main()
{
    string sentence = "alen heter jag-a-a-a-a";

    cout << vokalerInString(sentence) << endl;


}


int vokalerInString(string& sentence)
{
    int counter = 0;
    string vowels = "AOUÅEIYÄÖ";

    for (char c : sentence)
    {
        if (vowels.find(toupper(c)) != -1) counter++;
    }

    return counter;
}
