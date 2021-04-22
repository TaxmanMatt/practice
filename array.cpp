#include <iostream>
using namespace std;

//SIMPLE ARRAY
int main()
{
 //index number       0   1   2   3   4
    int myArray[5] = {66, 75, 2, 43, 99};

    cout << myArray[4];

    return 0;
}



//ARRAY WITH LOOPS
int main()
{
    int myArray[9];

    cout << "Element   -   Value" << endl;

    for (int x = 0; x < 9; x++){
        myArray[x] = 99;
        cout << x << "          " << myArray[x] <<endl;
    }


    return 0;
}



//USING ARRAY IN CALCULATIONS
int main()
{
    int myArray[5] = {20, 54, 76, 832, 546};
    int sum = 0;

    for (int x = 0; x < 5; x++) {
        sum += myArray[x];
        cout << sum << endl;
    }

    return 0;
}



//PASSING ARRAYS TO FUNCTIONS
void printArray(int theArray[], int sizeArray);

int main()
{
    int array1[3] = {20, 54, 675};
    int array2[6] = {54, 24, 7, 8, 9, 99};

    //Drop the square brackets and define how big is the array.
    printArray(array2, 3);

    return 0;
}

void printArray(int theArray[], int sizeArray) {

    for (int x = 0; x < sizeArray; x++) {
        cout << theArray[x] << endl;
    }
}



//MULTI-DIMENSIONAL ARRAYS
int main()
{
    //First square bracket = "How many rows"
    //Second square bracket = "How many columns"
    int myArray[2][3] = {{2, 3, 4}, {8, 9, 10}};
    // 2, 3, 4
    // 8, 9, 10

    cout << myArray[0][2];
    // Will output 4

    return 0;
}



//PRINTING OUT MULTI-DIMENSIONAL ARRAYS
int main()
{

    int myArray[2][3] = {{1, 2, 3}, {7, 8, 9}};

    for (int row = 0; row < 2; row++) {
        for (int column = 0; column < 3; column++) {
            cout << myArray[row][column] << " ";
        }
        cout << endl;
    }

    return 0;
}
