#include "minuterTillSek.h"
#include <iostream>
using namespace std;

int main()
{
    int minuter = 50;
    int sekunder = 25;

    cout << minuterTillSek(minuter, sekunder) << endl;

}

int minuterTillSek(int minuter, int sekunder)
{
    int totalSek = (minuter * 60);
    totalSek += sekunder;

    return totalSek;
}
