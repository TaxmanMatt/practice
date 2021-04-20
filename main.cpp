#include <iostream>
using namespace std;

int askChoice();

int main() {

  int input1, input2, output;

  if (askChoice() == 1) {
    cout << "You would like to add." << endl;
    cout << "Please enter first number: " << endl << endl;
    cout << "First Number: ";
    cin >> input1;

    cout << "Please enter the number you would like to add: " << endl << endl;
    cout << "Second Number: ";
    cin >> input2;

    cout << input1 << " + " << input2 << " = ";
    cout << input1 + input2;
  } else
  if (askChoice() == 2) {

  }

  return 0;
}

int askChoice() {

  int choice;

  cout << "Which of the following would you like to do: " << endl;
  cout << "1: Add" << endl;
  cout << "2: Subtract" << endl;
  cout << "3: Divide" << endl;
  cout << "4: Multiply" << endl << endl;
  cout << "Choice: ";

  cin >> choice;
  cout << endl;

  return choice;
}
