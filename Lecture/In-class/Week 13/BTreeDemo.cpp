#include <iostream>
using namespace std;
#include "BTree.h"

int main(){
    TreeNode * root = buildTree();

    cout << root -> right -> data << endl;

    cout << checkLeaf(root -> left -> right -> left) << endl;

    cout << nodeLevel(root, 15) << endl;
    cout << nodeLevelR(root, 15) << endl;
}