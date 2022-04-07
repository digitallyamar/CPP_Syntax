#include <iostream>

using namespace std;

class Amar {
    public:
        Amar() {
            num = 0;
            x = 99;
        }
        void print()
        {
            cout << "Amar:: " << num << endl;
        }
    private:
        int num;
        int x;

    friend void Guru(Amar &am);
};

void Guru(Amar &am)
{
    cout << "Guru:: " << &am << endl;
    cout << "Guru:: " << &am.num << endl;
    cout << "Guru:: " << &am.x<< endl;
    am.num = 5;
}

int main()
{
    Amar theBoss;
    Guru(theBoss);

    theBoss.print();

    return 0;
}
