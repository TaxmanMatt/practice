//
//  myClass.cpp
//  practice
//

#include "myClass.hpp"
#include <iostream>

using namespace std;

//Double colon is the binary scope resolution operator.
myClass::myClass()  {
    cout << "this is the constructor called automatically." << endl;
}

myClass::~myClass()  {
    cout << "this is the deconstructor." << endl;
}
