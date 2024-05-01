#include <iostream>
using namespace std;
#include "BTreeReview.h"

int main(){
    TreeNode * root = buildTree();

    // cout << root -> data << endl;
    cout << "minimum value: " << minVal(root) << endl;
    int arr[] = {4, 0, 15, 12, 99, 6};
    cout << "values: " << findVals(root, arr, 6) << endl;
}