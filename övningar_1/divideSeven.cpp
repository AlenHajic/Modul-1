#include "divideSeven.h"
#include <iostream>
using namespace std;

int main()
{
    int num = 73;

    if (divideSeven(num) == 1)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    
}

bool divideSeven(int num)
{
    if(num % 7 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
