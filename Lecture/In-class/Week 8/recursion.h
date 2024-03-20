#include <iostream>
using namespace std;

//write a function to prit all values in an array of strings
void printArr(){

}

//write a function that will print all numbers from 10 to 0
    //countdown
void countdown(int start){
    for(int i = start; i >= 0; i--){
        cout << i << " ";
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

void countdownR(int start){
    //BASE CASE
        //If the start is 0, solve this problem in one step
    if(start <= 0)
        cout << 0 << endl;

    //RECURSIVE CASE
    //if start is not zero, print two things: "first step" and "the rest"
    else{
        cout << start << " ";
        countdownR(start - 1);
    }
}

//define a function sum() which will return the sum of all numbers
    //from zero to "max"
        //EX: if max is 5, sum(5) should return 1+2+3+4+5 = 15
int sum(int max){
    int total = 0;
    for(int i = max; i >= 0; i--){
        total = total + i;
    }
    return total;
}
//design a recursive algorithm to find sum of all values up to "max"
    //BASE CASE? (max is 0 - add up all numbers from 0 to 0)
    //RECURSIVE CASE? 
int sumR(int max){
    //BASE CASE
    if(max == 0)
        return 0;
    //REXURSIVE CASE
    else{
        int total = 0;
        total = max + sumR(max - 1);
        //shows how it works. (Uncomment to show process)
        //cout << "found sum of " << max << " + sumR(" << max - 1 << ") = " << total << endl;
        return total;
    }
}