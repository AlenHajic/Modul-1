#include "AU.h"
using namespace std;

int main()
{
    
        std::string originalFilePath = "Text.txt";
        std::string shortWordsFilePath = "ShortWords.txt";
        std::string longWordsFilePath = "LongWords.txt";
        int splitFromLength = 5;

        bool result = wordSorter(originalFilePath, shortWordsFilePath, longWordsFilePath, splitFromLength);

        if (result) {
            std::cout << "Word sorting and partitioning completed successfully." << std::endl;
        }
        else {
            std::cout << "An error occurred during word sorting and partitioning." << std::endl;
        }

        return 0;
}

bool wordSorter(std::string originalFilePath, std::string shortWordsFilePath, std::string longWordsFilePath, int splitFromLength)
{
    ifstream input_file(originalFilePath);
    if (!input_file) {
        cout << "Unable to open file for reading" << endl;
        return false;
    }
    int size = 0;
    input_file >> size;

    if (size <= 0) {
        cout << "Invalid size in the input file" << endl;
        return false;
    }

    string* original = new string[size];

    string currentWord;
    for (int i = 0; i < size; i++)
    {
        input_file >> original[i];
    }
    input_file.close();

    sort(original, size);

    int numberOfShortWords = 0;
    int numberOfLongWords = 0;
    
    getWordPartitionSize(original, size, splitFromLength , numberOfShortWords, numberOfLongWords);

    string* shortWords = new string[numberOfShortWords];
    string* longWords = new string[numberOfLongWords];

    partition(original, size, shortWords, longWords, splitFromLength);

    ofstream short_output_file(shortWordsFilePath);
    if (!short_output_file) {
        cout << "Unable to open short words file for writing" << endl;
        delete[] original;
        delete[] shortWords;
        delete[] longWords;
        return false;
    }
    short_output_file << numberOfShortWords << endl;
    for (int i = 0; i < numberOfShortWords; i++)
    {
        short_output_file << shortWords[i] << endl;
    }
    short_output_file.close();

    ofstream long_output_file(longWordsFilePath);
    if (!long_output_file) {
        cout << "Unable to open long words file for writing" << endl;
        delete[] original;
        delete[] shortWords;
        delete[] longWords;
        return false;
    }
    long_output_file << numberOfLongWords << endl;
    for (int i = 0; i < numberOfLongWords; i++)
    {
        long_output_file << longWords[i] << endl;
    }
    long_output_file.close();

    delete[] original;
    delete[] shortWords;
    delete[] longWords;

    return true;
}

void partition(const std::string original[], int originalSize, std::string shortWords[], std::string longWords[], int splitFromLength)
{
    int shortCurrentIndex = 0;
    int longCurretIndex = 0;
    for (int i = 0; i < originalSize; i++)
    {
        if (original[i].length() < splitFromLength)
        {
            shortWords[shortCurrentIndex] = original[i]; 
            shortCurrentIndex++;
        }
        else
        {
            longWords[longCurretIndex] = original[i]; 
            longCurretIndex++;
        }
    }
}

void getWordPartitionSize(const std::string original[], int nrOfWords, int splitFromLength, int& numberOfShortWords, int& numberOfLongWords)
{
    for (int i = 0; i < nrOfWords; i++)
    {
        if (original[i].length() < splitFromLength)
        {
            numberOfShortWords++;
        }
        else
        {
            numberOfLongWords++;
        }
    }
}

void sort(std::string words[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = i;
        for (int j = i + 1; j < size; j++)
        {
            if (words[current].length() > words[j].length()) swap(words[current], words[i]);
        }
    }
}
