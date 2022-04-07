#include <iostream>

using namespace std;

template <class T>
class Amar {
    T first, second;
    public:
        Amar(T a, T b) {
            first = a;
            second = b;
        }
        // Fn defn for bigger() will be given outside the class
        // This is to showcase few corner conditions
        T bigger();
};

// Whenever a class fn defn is outside class, we need to
// redefine template datatype once again
// Watch @7:14:00 in https://youtu.be/mUQZ1qmKlLY?t=25990
template <class T>
T Amar<T>::bigger()
{
    return (first > second ? first : second);
}

int main()
{
    Amar <int> am(10, 20);

    cout << am.bigger() << endl;
}
