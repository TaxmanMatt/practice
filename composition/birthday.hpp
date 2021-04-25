//
//  birthday.hpp
//  practice
//
//  Created by <author> on 25/04/2021.
//
//

#ifndef birthday_hpp
#define birthday_hpp

#include <stdio.h>

class birthday {
    private:
        int month;
        int day;
        int year;
    public:
    birthday(int m, int d, int y);
    void printDate();
};


#endif /* birthday_hpp */
