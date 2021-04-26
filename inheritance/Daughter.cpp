//
//  Daughter.cpp
//  practice
//
//  Created by <author> on 26/04/2021.
//
//

#include "Daughter.hpp"
using namespace std;

//Daughter::Daughter()  {}

void Daughter::doSomething() {
    publicv = 1;
    protectedv = 2;
    //You won't be able to inherit the private variables.
    //privatev = 3;
}
