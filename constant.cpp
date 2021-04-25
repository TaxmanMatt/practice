#include <iostream>
using namespace std;

int main() {
    const int x = 5;

    //Will throw out error here due to x being a constant.
    x = 3;

    cout << x;

    return 0;
}
