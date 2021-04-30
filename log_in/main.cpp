#include <iostream>
#include <fstream>
using namespace std;

int splashScreen();
void loginFunction();
void registration();

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
    cout << "2: register" << endl;
    cout << "3: exit\n\n";
    cout << "choice: ";

    cin >> choice;

    switch(choice) {
        case 1:
            loginFunction();
            break;
        case 2:
            registration();
            break;
        case 3:
            break;
        default:
            //TODO fix bug where if input isn't of type int causes infinite loop.
            //try/catch still not working.
            try {
                if (choice != 1-2) {
                    throw 404;
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

    //checkDetailsCorrectFunction();
}

/*
checkDetailsCorrectFunction() {
    if details are correct open loginScreen();
}
*/

//TODO I think existing data gets overwritten instead of added to.
void registration() {
    cout.flush(); //Maybe turn this into a constructor when moving to class.
                  //TODO This needs fixing. It doesn't work. Needs to clear screen.
    string name, surname, email;
    ofstream userFile("users.txt", std::ios_base::app);

    cout << "\n\nPlease enter your first name: ";
    cin >> name;
    cout << "Please enter your surname: ";
    cin >> surname;
    cout << "Please enter your email address: ";
    cin >> email;
    userFile << surname << "," << name << ',' << email << endl;

    cout << "\nThank you, please check your mail and confirm registration.\n\n";
    //TODO implement a working email system????
    userFile.close();
    splashScreen();
}

//TODO function to ommit random characters from being added in registration.
//TODO function to change lowercase to uppercase on first letters.
//TODO function to change uppercase letters to lowercase in middle of names.
//TODO function to restructure the user database into alphabetic order.
