#include <iostream>
#include<fstream>
#include <string>
using namespace std;

//Jag ins�g inte att det skulle vara en funtkion d�r amn skcikar 
// in filnament, men det spelar ingen roll eftersom det �r l�tt 
// att g�ra.

int main()
{
	ifstream input_file("Text.txt");
	if (!input_file) cout << "Unable to open file" << endl;

	string fromFile;
	while(getline(input_file, fromFile))
	{
		cout << fromFile << endl;
	}

	input_file.close();

	return 0;
}
