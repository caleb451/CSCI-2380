//Define a recursive function to sum all values
//in an array of integers
//input: array (pointer to the first element), length of array
    //ex: arr[5] = {3, 1, 5, 0, 2}
    //will return 3+1+5+0+2=11

#include <string>
int sumArr(int arr[], int length){
    int i = length - 1;
    if(length == 0)
        return 0;
    else
        return arr[0] + sumArr(arr + 1, i);
}

//define a recursive function to say "Hello, ___"
    //to each person in an array of names
    //EX: arr["sam", "tam", "pam", "gam"]
    //output should be (print to console)

void printGreet(string names[], int num){
    int i = num - 1;
    if(num == 0)
        cout << "There is no more names." << endl;
    else
        cout << "Hello, " << names[0] << endl;
        printGreet(names + 1, i);
}

void printNums(int num){
    if(num < 10)
        cout << num << " ";
    else{
        printNums(num / 10);
        cout << num % 10 << " ";
    }
}