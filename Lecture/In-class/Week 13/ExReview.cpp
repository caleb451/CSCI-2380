#include <iostream>
using namespace std;

//1. BST -Done
//2. Search and Sort
//3. Recurrsion
//* time complexity

//bubble sort ---------------------------------------------------------------------------
    //list = {10, 3, 18, 11, -7, 5, 2, 1}
    //what does this ist look like after 2 iterations of bubbleSort
        //after 1 iteration, it looks like {3, 10, 11, -7, 5, 2, 1, 18}
        //after the 2nd iteration, it looks like {3, 10, -7, 5, 2, 1, 11, 18}
//---------------------------------------------------------------------------------------

//selection sort
    //find the index of minimum in a list
    //swap this with the first element in the list
        //repeat this with minimum from second to last
        //swap with second element
        //minimum from i-th to last
        //swap with i-th element


//recursive function
    //what will be the output if we call
        //rfunc(2, 3, 4)
    //how many times will the function be called recursively?
    //identify the base case and the recursice case
int rFunc(int x, int y, int z){
    if(z > 0)
        return x + y + rFunc(x - 1, y - 1, z / 2);
    else 
        return x * y * z;
}

/*

4
2
1


*/
int main(){
    cout << rFunc(2, 3, 4) << endl;
}