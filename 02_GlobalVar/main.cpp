#include <iostream>

using namespace std;

int a = 10;

int main()
{
    int a = 20;

    cout << "a = " << ::a << endl;
    return 0;
}
