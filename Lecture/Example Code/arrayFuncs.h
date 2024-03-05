#include <iostream>
#include <string>
using namespace std;

//Task 1
    //Define a function which will print an array in reverse
    //inputs: array of strings, size of the array
    //outputs: the strings in reverse order
    //returns: the number of strings that start with 'S'

int function(string arr[], int size){
    string currentWord;
    int counter = 0;
    //traverse the array in REVERSE
    for (int i = size - 1; i > -1; i--){
        cout << arr[i] << " ";
        currentWord = arr[i];

        //Check if the first letter of current word is 'S'
        if (currentWord[0] == 'S'){
            //increase counter of 'S' words
            counter++;
        }
    }
    return counter;
}