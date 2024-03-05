//GOAL: Work with dynamically allocated arrays
#include <iostream>
using namespace std;

int main(){
    //declare a pointer to an integer (ptr)
    int *ptr = nullptr;

    //declare an array of 5 integers (arr)
    int arr[5] = {8, 1, 2, 5, 4};

    //loops the output of the array
    for(int i = 0; i < 5; i++){
        cout << *(arr + i) << ", ";
    }

    //give ptr the same address as arr
    ptr = arr;

    //use ptr to print all elements of arr
    cout << endl;
    for(int i = 0; i < 5; i++){
        //cout << *(ptr + i) << ", "; //same thing as the next
        cout << ptr[i] << ", "; //same thing as the before
    }
    cout << endl;

    //use ptr as the address of a brand new array of size 5
    ptr = new int[5];

    //assign the first space in the new array with a 6
        //option 1: array notation
    ptr[0] = 6;
        //option 2: deference
    *ptr = 6;

    //copy the values of arr into the new array, at address ptr
    //ptr = arr; //incorrect as it copies the address from the array if we want to make ptr a new array
    for(int i = 0; i < 5; i++){
        ptr[i] = arr[i]; //copies values from one index to the other while not copying the address
        cout << ptr[i] << ", ";
    }
    cout << endl;

    //we need to add 3 more spaces in our array
    //make a new array with the same values but with more spaces
    int *ptr2 = new int[5 + 3]; // 8 spaces
    for(int i = 0; i < 8; i++){
        ptr2[i] = ptr[i]; //copies values from one index to the other while not copying the address
        if (i >= 5)
            ptr2[i] = i * 2;
        cout << ptr2[i] << ", ";
    }
    cout << endl;
    //Delete (deallocate) the memory of the old array
    delete [] ptr;

    //move "ptr" to the new array
    ptr = ptr2;

    //assign index 5, 6, 7 with new values
    ptr[5] = 18;

    //use a loop to print out the element up to 5
    for(int i = 0; i < 6; i++){
        cout << ptr2[i] << ", ";
    }

}