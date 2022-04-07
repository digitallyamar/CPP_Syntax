#include <iostream>
#include "People.h"

using namespace std;


Birthday::Birthday(int m, int d, int y)
{
    month = m;
    day = d;
    year = y;
}

void Birthday::printDate()
{
    cout << day << "/" << month << "/" << year << endl;
}
