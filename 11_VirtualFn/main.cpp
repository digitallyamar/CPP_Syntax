#include <iostream>

using namespace std;

class Enemy {
    public:
        virtual void attack(){
            cout << "Enemy attack fn." << endl;
        };
        // Instead of above virtual attack fn,
        // if we made
        // virtual void attack() = 0;
        // It is going to be called as A PURE VIRTUAL FUNCTION
        // An ABSTRACT CLASS will have only pure virtual function!
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "Ninja chop!" << endl;
        }
};

class Monster: public Enemy {
    public:
        // NOTE: If we removed below attack() implementation,
        // we would end up calling Enemy's attack()
        void attack() {
            cout << "Monster fire!" << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;

    Enemy *e1 = &n;
    Enemy *e2 = &m;

    e1->attack();
    e2->attack();
}
