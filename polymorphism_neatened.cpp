#include <iostream>
using namespace std;

class Enemy {
    protected:

    public:
        //note the use of the virtual keyword
        virtual void attack() {

        }
};

class Ninja: public Enemy {
    public:
        void attack() {
            cout << "ninja attack!" << endl;
        }
};

class Monster: public Enemy {
    public:
        void attack() {
            cout << "roar! eat you" << endl;
        }
};


int main()
{
    //ninja object
    Ninja n;
    //monster object
    Monster m;

    Enemy *enemy1 = &n;
    Enemy *enemy2 = &m;

    enemy1 -> attack();
    enemy2 -> attack();

    return 0;
}
