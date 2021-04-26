#include <iostream>
using namespace std;

/*
int main() {

    try {
        int momsAge = 30;
        int sonsAge = 34;

        if (sonsAge > momsAge) {
            throw 99;
        }
    } catch (int x) {
        cout << "son cannot be older than mom, ERROR NUMBER: " << x << endl;
    }
}
*/

int main () {

    try {
        int num1;
        cout << "enter first number: " << endl;
        cin >> num1;

        int num2;
        cout << "enter second number: " << endl;
        cin >> num2;

        if (num2 == 0) {
            throw 0;
        }

        cout << num1/num2 << endl;

    } catch(...) {
        cout << "you can't divide by 0" << endl;
    }

    return 0;
}
