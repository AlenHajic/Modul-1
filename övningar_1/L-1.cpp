#include <iostream>
#include<fstream>
#include <string>
using namespace std;

//Jag insåg inte att det skulle vara en funtkion där amn skcikar 
// in filnament, men det spelar ingen roll eftersom det är lätt 
// att göra.

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
