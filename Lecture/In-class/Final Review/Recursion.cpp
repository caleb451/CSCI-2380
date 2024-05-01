#include <iostream>
#include <string>
#include <cmath>
using namespace std;

#include "recursion.h"

int main(){
    int length = 5;
    int arr[length] = {3, 1, 5, 0, 2};

    cout << sumArr(arr, length) << endl;
    cout << endl;

    string names[length] = {"sam", "tam", "pam", "gam", "nam"};
    // printGreet(names, length);

    cout << endl;

    printNums(12345);
}