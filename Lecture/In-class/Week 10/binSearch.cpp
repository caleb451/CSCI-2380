#include <iostream>
using namespace std;

#include "binSearch.h"

int main(){
    int sortedArr[100];

    sortedArr[0] = {0};
    for(int i = 1; i < 100; i++){
        sortedArr[i] = sortedArr[i - 1] + (rand() % 5) + 1;
    }
    cout << binSearch(sortedArr, 0, 99, 260) << endl;

    cout << binSearchR(sortedArr, 0, 99, 260) << endl;
}