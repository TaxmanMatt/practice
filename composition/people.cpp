//
//  people.cpp
//  practice
//
//  Created by <author> on 25/04/2021.
//
//

#include "people.hpp"
#include <iostream>
#include "birthday.hpp"
using namespace std;


people::people(string x, birthday bo)
//Member initializer list
: name(x), dateOfBirth(bo)
{

}

void people::printInfo() {
    cout << name << " was born on ";
    dateOfBirth.printDate();
}
