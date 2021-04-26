#include <iostream>
#include <fstream>
using namespace std;

/*
int main() {

    ofstream buckyFile;
    buckyFile.open("tuna.txt");

    buckyFile << "I love tuna and tuna loves me" << endl;
    //important to close the object for memory release etc
    buckyFile.close();

    return 0;

}
*/

//more efficient method
int main() {
    ofstream buckysFile("beefjerky.txt");

    //remove the beefjerky.txt association to see else failure.
    if (buckysFile.is_open()) {
        cout << "the file is open" << endl;
    } else {
        cout << "you messed up yo" << endl;
    }

    buckysFile << "I love da beef" << endl;
    buckysFile.close();

    return 0;
}
