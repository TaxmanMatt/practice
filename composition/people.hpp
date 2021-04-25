//
//  people.hpp
//  practice
//
//  Created by <author> on 25/04/2021.
//
//

#ifndef people_hpp
#define people_hpp

#include <string>
#include "birthday.hpp"
using namespace std;


class people {
    private:
        string name;
        birthday dateOfBirth;
    public:
        people(string x, birthday bo);
        void printInfo();
};


#endif /* people_hpp */
