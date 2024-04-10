#include <iostream>

using namespace std;

#include "LLPro.h"

int main() {
    // declare a BinaryTree object
    BinaryTree myTree;

    // add the nodes in as shown
    /*
            root ==> 10
                    /  \
                   14   7
                   /   /
                200   1
    */
   // first create a new node for the root of the tree
    // then start connecting other nodes
    myTree.root = new TreeNode(10);
    // add the 7
    myTree.root -> right = new TreeNode(7);

    // add the 14
    myTree.root -> left = new TreeNode(14);

    // add the 200 and 1 nodes
    myTree.root -> right -> left = new TreeNode(1);
    myTree.root -> left -> left = new TreeNode(200);

    // Build a Binary Search Tree
     // 14, -6, -1, 20, 13, 2
    /*
            root ==>  14
                    /    \
                  ?
    */
    BinaryTree BST;

    BST.root = new TreeNode(14);
    
    BST.root -> left = new TreeNode(-6);

    BST.root -> right = new TreeNode(20);

    BST.root -> left -> right = new TreeNode(-1); 

    BST.root -> left -> right -> right = new TreeNode(13);

    BST.root -> left -> right -> right -> left = new TreeNode(2);


    BST.printTreeR(BST.root);

    cout << endl << endl;

    BST.BSTEvens(BST.root);
}