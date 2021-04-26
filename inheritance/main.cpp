#include <iostream>
#include "Mother.cpp"
#include "Daughter.cpp"
using namespace std;

int main() {
    Mother mom;
    mom.sayName();

    //Inherits the function from the mother base class.
    Daughter tina;
    tina.sayName();
    tina.doSomething();


}
