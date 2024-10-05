#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void fillFileWithNums(string fileName, int nrOf, int smallest, int biggest);
string* readFromFileIntoPointerArray(string fileName);


int main()
{
	int nrOf = 10;
	int smallest = 10;
	int biggest = 20;

	fillFileWithNums("Text.txt", nrOf, smallest, biggest);

	readFromFileIntoPointerArray("Text.txt");

	return 0;

}

void fillFileWithNums(string fileName, int nrOf, int smallest, int biggest)
{
	ofstream output_file(fileName);
	int random = 0;
	srand(time(NULL));
	output_file << "Number of randomized: " << nrOf << endl;
	for (int i = 0; i < nrOf; i++)
	{
		random = rand() % (biggest - smallest + 1) + smallest;
		output_file << random << endl;
	}

	output_file.close();
}

string* readFromFileIntoPointerArray(string fileName)
{
	ifstream input_file(fileName);
	string newLine;
	int counter = 0;
	while (getline(input_file, newLine))
	{
		counter++;
	}
	string* array = new string[counter];

	int i = 0;
	while (getline(input_file, newLine))
	{	
		array[i] = newLine;
		i++;
	}

	for (int i = 0; i < counter; i++)
	{
		cout << array[i] << endl;
	}

	return array;
}


