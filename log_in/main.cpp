#include <iostream>
using namespace std;

int splashScreen();
void loginFunction();

int main()
{
    splashScreen();
}

int splashScreen() {
    int choice;

    cout << "***********************************************" << endl;
    cout << "         WEIRD HACKERMAN LOG IN SYSTEM         " << endl;
    cout << "***********************************************" << endl << endl;
    cout << "1: login" << endl;
    cout << "2: register\n\n";
    cout << "choice: ";

    cin >> choice;

    switch(choice) {
        case 1:
            loginFunction();
            break;
        case 2:
            //registerCheckFunction();
            break;
        default:
            //TODO fix bug where if input isn't of type int causes infinite loop.
            try {
                if (choice != 1 || choice != 2 || !cin) {
                    throw 505;
                }
            }
            catch(int errorNum) {
                cout << "ERROR: outside the parameters\n\n";
                splashScreen();
            }
    }
}

void loginFunction() {
    string username, password;

    cout << "\n";
    cout << "username: ";
    cin >> username;
    cout << "password: ";
    cin >> password;

    //checkDetailsFunction();

}
