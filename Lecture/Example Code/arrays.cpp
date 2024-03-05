#include <iostream> 
#include "arrayFuncs.h"

using namespace std;

int main(){
    string myWords[4] = {"sorry", "Hello", "Salamander", "Go"};
    int result = function(myWords, 4);
    cout << endl << "Number of S Words: " << result;
}