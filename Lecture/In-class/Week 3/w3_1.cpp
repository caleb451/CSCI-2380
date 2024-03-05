#include <iostream>
using namespace std;
#include "warmUp.h"
#include "BetterArray.h"

int main(){
    const int LENGTH = 7;
    int myArr[LENGTH];

    incFill(myArr, LENGTH, 12);

    for (int i = 0; i < LENGTH; i++)
        cout << myArr[i] << " ";
    cout << endl << endl;

    //write a for loop
        //start at 2048
        //end at 1
        //each time a number is printed, next number is half of previous
            //2048, 1024, 512, 256...
    
    for (int i = 2048; i > 0; i /= 2)
        cout << i << " ";
    cout << endl << endl;

    //fill an array with values from 99 until the array is filled;
        //99, 100, 101, 102, 103...
    //use myArray
    int start = 99;
    for (int i = 0; i < LENGTH; i++){
        myArr[i] = start;
        start++;
    }

    for (int i = 0; i < LENGTH; i++){
        cout << myArr[i] << " ";
    }

    cout << endl << endl;

    start = 99;
    for (int i = LENGTH - 1; i > 0; i--){
        myArr[i] = start;
        start -= 1;
    }

    for (int i = 0; i < LENGTH; i++){
        cout << myArr[i] << " ";
    }

    cout << endl << endl;
    //Declare 2 BetterArrays
    BetterArray a;
    BetterArray b;

    //ACCESS: access and print the capacity of BetterArray b
    cout << b.capacity << endl;
}