#include "multi.h"
#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;

    cout << "Skriv in num1" << endl;
    cin >> num1;

    cout << "Skriv in num2" << endl;
    cin >> num2;

    cout << multi(num1, num2) << endl;
   
}

int multi(int num1, int num2)
{
    int product = num1 * num2;

    return product;
}
