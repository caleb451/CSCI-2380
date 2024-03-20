#include <iostream>
using namespace std;
#include "recursion.h"

int main(){
    cout << "iterative: ";
    countdown(20);

    cout << "recursive: ";
    countdownR(20);

    cout << "iterative: ";
    cout << sum(5) << endl;

    cout << "recursive: ";
    cout << sumR(5) << endl;
}