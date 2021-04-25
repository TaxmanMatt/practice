#include <iostream>
#include "birthday.cpp"
#include "people.cpp"
using namespace std;

int main()
{
    birthday objectName(28, 6, 88);

    people nameInput("Matthew", objectName);
    nameInput.printInfo();

    return 0;
}
