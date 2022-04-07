#include <iostream>
#include "Automobile.h"

using namespace std;

Automobile::Automobile(int a, int b)
: constVar(b)
{
    normalVar = a;
}

Automobile::~Automobile()
{
}

void Automobile::print()
{
    cout << "normalVar = " << normalVar << ", constVar = " << constVar << endl;
}
