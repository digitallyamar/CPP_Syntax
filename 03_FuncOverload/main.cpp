#include <iostream>

using namespace std;

void printAverage(int a, int b)
{
    cout << "Average(int) = " << (a + b)/2 << endl;
}


void printAverage(int a, float b)
{
    cout << "Average(float) = " << (a + b)/2 << endl;
}


int main()
{
    int a = 10, b = 12;
    float c = 24.5;

    printAverage(a, b);
    printAverage(a, c);
    return 0;
}
