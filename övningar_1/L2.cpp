#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void writeInFile(string fileName, string text); //Denna skriver �ver allt i filen
void writeInFileApp(string fileName, string text); //Denna l�gger till ihop med det som redan finns i filen, notera att den skriver en rad under.
void readFromFile(string fileName);

int main()
{
	string fileName = "Text.txt";
	string text = "Jag �r homo, vilket �r helt okej :))";
	writeInFileApp(fileName, text);
	readFromFile(fileName);

}

void writeInFile(string fileName, string text)
{
	ofstream output_file(fileName);
	output_file << text;
	output_file.close();

}

void writeInFileApp(string fileName, string text)
{
	ofstream output_file(fileName, ofstream::app);
	output_file << text;
	output_file.close();
}

void readFromFile(string fileName)
{
	ifstream input_file("Text.txt");
	string fromFile;
	while (getline(input_file, fromFile))
	{
		cout << fromFile << endl;
	}  
	input_file.close();
}
