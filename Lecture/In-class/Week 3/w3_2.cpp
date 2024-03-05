#include <iostream>
using namespace std;

#include "BetterArray.h"

int main(){
    //Declaration: 2 BetterArrays(a and b)
    BetterArray a;
    BetterArray b;

    //ACCESS: access and print the capacity of BetterArray b
    cout << a.capacity << endl;

    //use the print() method on BetterArray a
    a.print();

    //add values 
    a.addVal(-1);
    a.addVal(1);
    a.addVal(2);
    a.addVal(3);
    a.addVal(4);
}