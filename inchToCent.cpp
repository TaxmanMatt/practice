#include <iostream>
#include <cassert>
using namespace std;

double inchToCent(double inch);

int main()
{
    double inches;

    cout << "input the number inches you would like to convert: ";
    cin >> inches;

    cout << inchToCent(inches) << "cm" << endl;

    return 0;
}

/*
double inchToCent(double inch) {
    if (inch < 0)
    {
        cerr << "must be non-negative" << endl;
        return -1.0;
    } else {
        return 2.54 * inch;
    }

}
*/

//efficient of the above, should you wish the program to terminate.
double inchToCent(double inch) {
    assert(inch > 0);
    return inch * 2.54;
}


//TODO issues with non-negative output results
