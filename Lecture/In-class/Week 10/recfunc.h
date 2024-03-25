#include <iostream>

using namespace std;

int mysteryR(int num1, int num2){
    if(num1 > num2)
        return num1 + num2;
    else
        return (num2 - mysteryR(num1 * 2, num2));
}