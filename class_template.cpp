#include <iostream>
using namespace std;

template <class T>
class Bucky {
    T first, second;
    public:
        Bucky(T a, T b){
            first = a;
            second = b;
        }
        T bigger();
};

//Need to re-add the template
template <class T>
T Bucky<T>::bigger() {
    return (first>second? first:second);
}

int main() {

    //have to define the type before the object.
    Bucky <int> bo(69, 420);
    cout << bo.bigger();

}
