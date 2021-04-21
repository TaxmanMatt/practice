#include <iostream>
using namespace std;

//Prototyping the function.
int askChoice();

int main() {

  double input1, input2;

//Switch to group choices and output answers.
  switch (askChoice()) {
    case 1:
      cout << "You would like to add." << endl;
      cout << "Please enter first number: " << endl << endl;
      cout << "First Number: ";
      cin >> input1;

      cout << "Please enter the number you would like to add: " << endl << endl;
      cout << "Second Number: ";
      cin >> input2;

      cout << input1 << " + " << input2 << " = ";
      cout << input1 + input2;
      break;
    case 2:
      cout << "You would like to subtract." << endl;
      cout << "Please enter first number: " << endl << endl;
      cout << "First Number: ";
      cin >> input1;

      cout << "Please enter the number you would like to subtract: " << endl << endl;
      cout << "Second Number: ";
      cin >> input2;

      cout << input1 << " - " << input2 << " = ";
      cout << input1 - input2;
      break;
    case 3:
      cout << "You would like to divide." << endl;
      cout << "Please enter first number: " << endl << endl;
      cout << "First Number: ";
      cin >> input1;

      cout << "Please enter the number you would like to divide by: " << endl << endl;
      cout << "Second Number: ";
      cin >> input2;

      cout << input1 << " / " << input2 << " = ";
      cout << input1 / input2;
      break;
    case 4:
      cout << "You would like to multiply." << endl;
      cout << "Please enter first number: " << endl << endl;
      cout << "First Number: ";
      cin >> input1;

      cout << "Please enter the number you would like to multiply by: " << endl << endl;
      cout << "Second Number: ";
      cin >> input2;

      cout << input1 << " * " << input2 << " = ";
      cout << input1 * input2;
      break;
  }

  return 0;
}

//Function to check what operator the user wants.
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
