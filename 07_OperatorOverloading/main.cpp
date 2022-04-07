#include <iostream>
#include "Silly.h"

using namespace std;

int main()
{
    Silly a(34), b (56), c;
    c = a + b;
    cout << c.num << endl;
    return 0;
}
