#include <iostream>

using namespace std;

int mysteryR(int num1, int num2){
    if(num1 > num2)
        return num1 + num2;
    else
        return (num2 - mysteryR(num1 * 2, num2));
}

// Write a function to print an array of integers 
// from "start" to "end" index values
    // EX: arr[100], start = 20, end = 23
        // print arr[20], arr[21], arr[22], arr[23]
void printArr(int arr[], int start, int end) {
    for(int index = start; index <= end; index++) {
        cout << arr[index] << " ";
    }
    cout << endl;
}

// Write a recursive function printArrR()
    // will do the same thing as printArr(), but recursively (no loop)

// Simplest case for this problem? Where I can print without a loop
    // think about the values for start and end indices
    // what if start and end are equal?
    // what if start is greater than end?
// otherwise, how do we split this into "do one step, then the rest"
void printArrR(int arr[], int start, int end) {
    // BASE CASE 1
    if(start == end) {
        cout << arr[start] << endl;
        // DONE
    }
    // BASE CASE 2
    else if(start > end) {
        cout << endl;
        // DONE
    }
    // RECURSIVE CASE
    else {
        // STEP 1 (print the first value - at "start")
        cout << arr[start] << " ";
        // THE REST (print from start+1 to end)
        printArrR(arr, start+1, end);
    }
}

// Write a function findTarget() which will return the index
    // of a target value in an array, in the index range of start to end
    // EX: arr[100], target = 16
        // function will return the index of the first place 
        // where 16 can be found
        // if not found, return -1
        // in the worst case, how many iterations will this run
            // if there are n values between start and end
int findTarget(int arr[], int start, int end, int target) {
    
    for(int i = start; i <= end; i++) {
        if(arr[i] == target)
            return i;
    }
    return -1;
}

// Practice at home (design and implement a recursive version)


// Implement the algorithm I describe
    // you have an array, searching from start to end
        // int arr[], int start, int end, int target
    // 1. look in the middle of the start-end range
    // 3 case each time you search
        // case 1 - the middle is the target - DONE, return index
        // case 2 - the middle is less than target
                    // left half of list can't have value
                    // move start to after middle
        // case 3 - the middle is greater than target
                    // the right half can't have value
                    // move end to before middle
        // you are done searching if start is larger than end
int binSearch(int arr[], int start, int end, int target) {
    // initialize
    int middle = (start+end)/2;
    while(start <= end) {
        // case 1
        // case 2
        // case 3
    }

    // not found
    return -1;
}