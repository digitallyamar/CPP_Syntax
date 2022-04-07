#include <iostream>

using namespace std;

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a)
        {
            attackPower = a;
        };
};

class Ninja: public Enemy {
    public:
        void attack()
        {
            cout << "I am a Ninja, Ninja chop! -" << attackPower << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack()
        {
            cout << "Monster must eat you!! -" << attackPower << endl;
        }
};

int main()
{
    Ninja n;
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1->setAttackPower(29);
    enemy2->setAttackPower(99);

    n.attack();
    m.attack();                     // we would have not had to switch to obj n or m if
                                    // Enemy class just had a virtual fn. called attack
                                    // But alas, in the current code, we don't have one!
}
