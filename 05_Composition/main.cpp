#include <iostream>
#include "People.h"

using namespace std;

int main()
{
    Birthday b(6, 28, 1982);
    People p("Amar", b);

    p.printInfo();

    return 0;
}
