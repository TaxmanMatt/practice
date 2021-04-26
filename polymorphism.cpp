#include <iostream>
using namespace std;

class Enemy {
    protected:
        int attackPower;
    public:
        void setAttackPower(int a) {
            attackPower = a;
        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "I am ninja, nina chop! -" << attackPower << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "Monster eat you! -" << attackPower << endl;
        }
};


int main()
{
    Ninja n;
    Monster m;
    Enemy *enemy1 = &n;             //ninja is of type enemy, this is valid.
    Enemy *enemy2 = &m;             //anything that enemy can do, monster can do.

    enemy1 -> setAttackPower(25);   //ninja is just a more specific type of enemy.
    enemy2 -> setAttackPower(45);   //every enemy has setAttackPower

    n.attack();                     //can't use enemy1 because it's type enemy.
    m.attack();                     //enemy class does not have attack.
                                    //virtual members make this even easier.
    return 0;
}
