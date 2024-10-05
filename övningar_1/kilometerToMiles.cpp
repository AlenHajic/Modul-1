#include "kilometerToMiles.h"
#include <iostream>
using namespace std;

int main()
{
    float kilometeres = 15;

    cout << kiloToMiles(kilometeres) << endl;

}

float kiloToMiles(float kilometers)
{
    float miles = kilometers / 1.609344;

    return miles;
}
