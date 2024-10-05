#include "3-3.h"
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Write you first number" << endl;
    cin >> num1;
    cout << "Write you first number" << endl;
    cin >> num1;

    cout << swap(num1, num2) << endl;


    return 0;
}

int swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;

    return num1, num2;
}
