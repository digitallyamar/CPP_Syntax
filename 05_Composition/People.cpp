#include <iostream>
#include "People.h"

using namespace std;


People::People(string x, Birthday bo)
: name(x), dateOfBirth(bo)
{
}

void People::printInfo()
{
    cout << "Name: " << name << ", DOB = ";
    dateOfBirth.printDate();
}
