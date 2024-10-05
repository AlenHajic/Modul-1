#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <cstdlib>
using namespace std;

void writeNumbersOnFile(string filename, int smallest, int biggest, int nrOf);
void readFromFile(string fileName);

int main()
{
	int nrOf = 10;
	int smallest = 10;
	int biggest = 20;
	string fileName = "Text.txt";

	writeNumbersOnFile(fileName, smallest, biggest, nrOf);
	readFromFile(fileName);

	return 0;

}

void writeNumbersOnFile(string filename, int smallest, int biggest, int nrOf)
{
	ofstream output_file(filename);
	int random = 0;
	srand(time(NULL));
	output_file << "NrOf:" << nrOf << endl;
	if (!output_file) cout << "Unable to open file for writing" << endl;
	for (int i = 0; i < nrOf; i++)
	{
		random = rand() % (biggest - smallest + 1) + smallest;
		output_file << random << endl;
	}

	output_file.close();

}

void readFromFile(string fileName)
{
	ifstream input_file(fileName);
	if (!input_file) cout << "Unable to open file for reading" << endl;
	string newLine;
	while (getline(input_file, newLine))
	{
		cout << newLine << endl;
	}

	input_file.close();
}
