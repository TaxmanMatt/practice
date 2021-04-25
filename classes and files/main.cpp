#include <iostream>
#include "myClass.hpp"
#include "myClass.cpp"
using namespace std;

int main() {
    myClass bo;

    cout << "This will go between constructor & deconstructor" << endl;

    return 0;
}
