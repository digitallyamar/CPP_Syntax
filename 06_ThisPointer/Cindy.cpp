#include <iostream>
#include "Cindy.h"

using namespace std;

Cindy::Cindy(int b)
: barkCount(b)
{

}

void Cindy:: print()
{
    cout << "barkCount = " << barkCount << endl;
    cout << "this->barkCount = " << this->barkCount << endl;
    cout << "(*this).barkCount = " << (*this).barkCount << endl;
}
