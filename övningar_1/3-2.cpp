#include "3-2.h"
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Write you first number" << endl;
    cin >> num1;
    cout << "Write you second number" << endl;
    cin >> num2;
    cout << "Write you third number" << endl;
    cin >> num3;

    cout << medelThree(num1, num2, num3) << endl;

}

float medelThree(int num1, int num2, int num3)
{
    float medel = (num1 + num2 + num3) / 3;

    return medel;
}
