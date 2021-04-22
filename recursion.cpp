#include <iostream>
using namespace std;

/*void someFunction() {
    cout << "something something";
    someFunction();
}

int main()
{
    someFunction();

    return 0;
}
*/

int factorialFinder(int x) {
    //Need to have the base case to break out of loop.
    if (x == 1) {
        return 1;
    } else {
        return x * factorialFinder(x - 1);
    }
}

int main()
{
    int factorial;

    cout << "please enter factorial" << endl;
    cin >> factorial;

    //cout << factorialFinder(5);
    cout << factorialFinder(factorial);

    return 0;
}
