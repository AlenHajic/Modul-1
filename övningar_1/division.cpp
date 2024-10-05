#include "division.h"
#include  <iostream>
using namespace std;

int main()
{
    int num1;
    float num2;

    cout << "Skriv in heltal1" << endl;
    cin >> num1;
    cout << "Skriv in heltal2" << endl;
    cin >> num2;

    cout << division(num1, num2) << endl;

}

float division(int num1, float num2)
{
    float num3 = num1 / num2;

    return num3;
}
