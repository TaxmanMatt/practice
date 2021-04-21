#include <iostream>
#include <string>

using namespace std;

class MatthewClass {
    public:
        //Contrsuctor uses the same name as the class.
        MatthewClass(string z) {
            setName(z);
        }
        void setName(string x) {
            name = x;
        }
        string getName() {
            return name;
        }
    private:
        string name;
};

int main()
{
    MatthewClass bo("Lucky Bucky");
    cout << bo.getName() << endl;

    //Each object gets assigned it's own set of variables in the class.
    MatthewClass bo2("Chuckle Fuckles");
    cout << bo2.getName();

    return 0;
}

//Constructors are good for giving variables an initial value.
