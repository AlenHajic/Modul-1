#include <iostream>
#include <string>
using namespace std;

int main()
{
	string text;
	int counter = 0;
	cout << "Skriv en menning s� r�knar jag mellanslagen" << endl;
	getline(cin, text);
	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == ' ') counter++;
	}

	cout << "Din mening hade: " << counter << " st mellanslag" << endl;
	
}