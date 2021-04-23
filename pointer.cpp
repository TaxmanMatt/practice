#include <iostream>
using namespace std;

//Basics of a pointer.
int main()
{
    int fish = 4;

    cout << &fish << endl;

    int *fishPointer;
    fishPointer = &fish;

    cout << fishPointer << endl;

    return 0;
}



//Pass by reference with pointers.
void passByValue(int x);
void passByReference(int *x);

int main()
{
    int betty = 14;
    int sandy = 13;

    passByValue(betty);
    passByReference(&sandy);

    cout << betty << endl;
    cout << sandy << endl;

    return 0;
}

void passByValue(int x) {
    x = 99;
}

void passByReference(int *x) {
    *x = 66;
}



//sizeof Function
int main()
{
    //char c;
    //cout << sizeof(c) << endl;

    //check size of array in bytes.
    double bucky[10];
    cout << sizeof(bucky) << endl;



    return 0;
}



//Pointers and Math
int main()
{

    int bucky[5];
    int *bp0 = &bucky[0];
    int *bp1 = &bucky[1];
    int *bp2 = &bucky[2];

    cout << "bp0 is at " << bp0 << endl;
    cout << "bp1 is at " << bp1 << endl;
    cout << "bp2 is at " << bp2 << endl;

    bp0 += 2;

    cout << "bp0 is at " << bp0 << endl;

    return 0;
}
