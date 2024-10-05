#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int vokaler(string text);

int main()
{
	string text = "Hej på Dig";

	cout << "Vokaler: " << vokaler(text) << endl;

}

int vokaler(string text)
{
	int counter = 0;
	for (char& c : text)
	{
		c = ::tolower(c);
	}

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a' || text[i] == 'o' || text[i] == 'å' || text[i] == 'ä' || text[i] == 'ö' || text[i] == 'e' || text[i] == 'i' || text[i] == 'y') counter++;
	}

	return counter;
}