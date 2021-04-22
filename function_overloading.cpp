#include <iostream>
using namespace std;

void printNumber(int x) {
    cout << "I am print integer: " << x << endl;
}

void printNumber(float x) {
    cout << "Now I print floaty: " << x << endl;
}

int main()
{
    int a = 54;
    float b = 32.546;

    //printNumber(a);
    printNumber(b);

    return 0;
}
