#include <iostream>
#include "arrow.hpp"
#include "arrow.cpp"
using namespace std;

int main() {

    arrow arrowObject;
    arrow *arrowPointer = &arrowObject;

    //Use dot separater when using objects to access class.
    arrowObject.printCrap();

    //Use the arrow oeprator when using a pointer to access a class.
    arrowPointer->printCrap();

}
