#include <iostream>
using namespace std;

//write a function to prit all values in an array of strings
void printArr(){

}

//write a function that will print all numbers from 10 to 0
    //countdown
void countdown(int start){
    for(int i = start; i >= 0; i--){
        cout << i << "... ";
    }
    cout << endl;
}

//RECURSSION 
    //two main considerations
    //take one step toward solution
    //do the rest of the problem (smaller problem than original)

//for countdown
    //STEP 1: print start value
    //STEP 2: print rest of the values
//consider... what value of start can we use so that we can solve without a loop
    //what if 'start' is zero?