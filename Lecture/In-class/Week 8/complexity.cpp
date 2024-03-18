#include <iostream>
using namespace std;

//sequential search example
//write a dunction seqSearch() that will return true if a value is in an array of length n
    //inuts: array of integers, length n, target value (int)
    //return: true if value is in the array
            //false otherwise
    //problem: what is the time compleity (big O) for this solution

    // bool seqSearch(int arr[], int n, int target){
    //     return true;
    // }



int main(){
    //COMPLEXITY
        //Big 0 notation (worst case)
        //if array has 100 values, worst case is 100 iterations
        //if array has 1000 values, worst case is 1000 iterations
        //if array has n values, worst case is n iterations
        //function to describe this is 0()

    //write a function to find an even number in a list of numbers
    int LENGTH = 1000;
    int arr[LENGTH];
    for(int i = 0; i < 1000; i++){
        arr[i] = rand() % LENGTH;
    }
    //cout << arr[13] << endl;

    for(int i = 0; i < 1000; i++){
        if(arr[i] % 2 == 0){
            cout << arr[i] << endl;
            break;
        }
    }
    //cout << endl;
    
    //write an algorithm that will print "true"
        //if an array has more than 10 values
        //0(1) solution - does not grow 
    if (LENGTH > 10){
        cout << "$$$" << endl;
    }
}