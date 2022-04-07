#include <iostream>
#include "Silly.h"

using namespace std;

Silly::Silly()
{

}

Silly::Silly(int a)
{
    num = a;
}

Silly Silly::operator+(Silly aso) {
    Silly brandNew;

    brandNew.num = num + aso.num;
    return (brandNew);
}
