#include <iostream>
#include <cmath>

using namespace std;

//Conventional method.
void calcDogsAge(int x) {
    cout <<  x * 7 << endl;
}

//Empirical method.
void calcDogsAge(double x) {
    cout <<  16 * log10(x) + 31 << endl;
}



int main()
{
    calcDogsAge(5);
    calcDogsAge(5.00);

    return 0;
}
