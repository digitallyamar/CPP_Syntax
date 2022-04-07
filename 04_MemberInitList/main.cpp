#include <iostream>
#include "Automobile.h"

using namespace std;

int main()
{
    int a = 10;
    const int b = 20;
    Automobile vehicle(a, b);

    vehicle.print();


    return 0;
}
