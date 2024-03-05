//memory in cpp

#include <iostream>
using namespace std;

void plusOne(int &x){
    x++;
}

int main(){
    //declare an integer x
        //assign a value of 7
    int x;
    x = 7;

    cout << "value of x: " << x << endl;
    cout << "the adress of x is: " << &x << endl; 

    plusOne(x);

    cout << "\nvalue of x: " << x << endl;
    cout << "the adress of x is: " << &x << endl;

    //declare a boolean value yesNo
    //print the address of that value
    bool yesNo;
    cout << "\nthe address of yesNo is: " << &yesNo << endl;

    // POINTERS
    //to declare a pointer we use dataType* identifier
    //EX: declare a pointer to an integer
    int* myPtr;
    myPtr = nullptr; //pointer to nothing
    //what is the address stored in myPtr

    //store the address of x in myPtr
    cout << "\naddress in myPtr: " << myPtr << endl;
    myPtr = &x;
    cout << "address in myPtr: " << myPtr << endl;

    //declare a pointer to store the address of yesNo
    bool* ptrToYesNo = &yesNo;
    void* ptrWithNoType;

    int arr[100];
    for(int i = 0; i < 100; i++){
        arr[i] = i;
    }

    //declare a pointer that stores the address of ar[42]
    //declare another pointer for address of arr[43]

    int *num1, *num2;
    num1 = &arr[42];
    num2 = &arr[43];
    if(num1 == num2){
        cout << "\nsame address" << endl;
    }
    else
        cout << "\nnot the same address" << endl;
    cout << "address for num1: " << num1 << endl << "address for num1: " <<  num2 << endl;

    //dereferencing (asterik operator)
        //instead of using identifier, we do 2 steps
            //setp 1: go to the address using a pointer
            //step 2: open up the object at that address
    cout << endl << *myPtr << endl;

    //print the values at num1 and num2 using the pointers
    cout << endl << *num1 << endl << *num2 << endl;

    //assign the value at myPtr with 100
    *myPtr = 100;
    cout << endl << *myPtr << endl;
    cout << x << endl;

}