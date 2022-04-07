#include <iostream>
#include "Mother.h"
#include "Daughter.h"

using namespace std;

Daughter::Daughter()
{
}

void Daughter::doSomething()
{
    pubv = 1;
    protv = 2;
    // Here is the answer:
    // Below line will throw error coz private vars are not derived!
    //privv = 3;
}
