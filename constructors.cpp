#include <iostream>
#include <string>

using namespace std;

class MatthewClass {
    public:
        //Contrsuctor uses the same name as the class.
        MatthewClass() {
            cout << "constructors get called automatically when creating a class object.";
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
    MatthewClass bo;

    return 0;
}

//Constructors are good for giving variables an initial value.
