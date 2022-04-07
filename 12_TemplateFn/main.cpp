#include <iostream>

using namespace std;

template <class amar>
amar add(amar a, amar b)
{
    return a + b;
}

template <class T, class V>
V smaller(T a, V b)
{
    return a < b ? a : b;
}

int main()
{
    int a = 10, b = 20, res = 0;
    double da = 56.415, db = 18.55, rd = 0;

    res = add(a, b);
    cout << res << endl;

    rd = add(da, db);
    cout << rd << endl;

    // Function taking two diff types of params
    cout << "smaller among a = " << a << " and db = " << db << " is " << smaller(a, db) << endl;
}
