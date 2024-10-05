#include "2-4.h"
using namespace std;

int main()
{
    int size = 0;
    cout << "Bestäm storleken på array:en" << endl;
    cin >> size;

    cout << arrayRandom(size) << endl;

}

int arrayRandom(int size)
{
    int* arr = new int[size];
    srand(time(NULL));
    int total = 0;

    for (int i = 0; i < size; i++)
    {
        int current = rand() % 999;
        cout << current << endl;
        arr[i] = current;
        total += current;
    }

    delete[] arr;

    return total;
}
