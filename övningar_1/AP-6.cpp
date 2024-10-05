#include <iostream>
using namespace std;

void addTitle(string* &bookTitles, int &nrOfTitles, int &capacity, string newTitle);
void expand(string* &bookTitles, int &nrOfTitles, int &capacity);

int main()
{
	int capacity = 2;
	string* bookTitles = new string[capacity];
	int nrOfTitles = 0;

	addTitle(bookTitles, nrOfTitles, capacity, "Harry Potter: Hagrdis dicking");
	addTitle(bookTitles, nrOfTitles, capacity, "Dune: en stor jalva mask");
	addTitle(bookTitles, nrOfTitles, capacity, "Sagan om ringen: frodo knullar goblin, oj menade golum");

	for (int i = 0; i < nrOfTitles; i++)
	{
		cout << bookTitles[i] << endl;
	}

	delete[] bookTitles;
}

void addTitle(string* &bookTitles, int &nrOfTitles, int &capacity,string newTitle)
{
	bookTitles[nrOfTitles] = newTitle;
	nrOfTitles++;
	if (nrOfTitles == capacity) expand(bookTitles, nrOfTitles, capacity);
}

void expand(string* &bookTitles, int &nrOfTitles, int &capacity)
{
	int newCapacity = capacity + 5;
	string* temp = new string[newCapacity];
	for (int i = 0; i < capacity; i++)
	{
		temp[i] = bookTitles[i];
	}

	delete[] bookTitles;
	bookTitles = temp;
	capacity = newCapacity;

}
