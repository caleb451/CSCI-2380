// Define a linked list class
    // holds string data
    // made of Node objects
    // has one entry point to the list (head pointer)
    // every node in the list can connect in the following ways
        // forward (right), left, upward, downward

class Node {
    public:
        string data;
        Node *right, *left, *up, *down;
};

class LLCustom {
    public:
        Node* head;
};



// Define a class for Nodes and Tree, "Binary Tree"
    // each node holds integer data
    // each node can go right or left
class TreeNode {
    public:
        int data;
        TreeNode *right;
        TreeNode *left;

        // define a constructor for this node
            // input parameter can give us a value for the data
            // if no value is given, data can be zero
        TreeNode(int inData = 0) {
            data = inData;
            right = nullptr;
            left = nullptr;
        }
};

class BinaryTree {
    public:
        TreeNode *root;

        void printTreeR(TreeNode* start){
            //BASE CASE 
            //start node doesn't have any children
            if(start -> right == nullptr && start -> left == nullptr){
                cout << start -> data << " ";
                return ;
            }

            //RECURSIVE CASE
            //what if there is a child on the right?
            if(start -> right != nullptr){
                cout << start -> data << " ";
                printTreeR(start -> right);
            }
            if(start -> left != nullptr){
                cout << start -> data << " ";
                printTreeR(start -> left);
            }
        }

        void printR2(TreeNode* start){
            //BASE CASE 
            if(start == nullptr){
                return;
            }
            else{
                cout << start -> data << " - ";
                printR2(start -> right);
                printR2(start -> left);
            }
        }
};

//define a function that will return the number of even values in a BST

int BSTEvens(TreeNode* start){
    int evens = 0;
    //BASE CASE - stops if theres nothing to print
    if(start == nullptr){
        return 0;
    }
    //RECURSSIVE CASE - checks to see if theres no nullptr pointing
    //This returns the evens
    // if(((start -> data) % 2) == 0)
    //     return 1 + BSTEvens(start -> right) + BSTEvens(start -> left);
    // else
    //     return 0 + BSTEvens(start -> right) + BSTEvens(start -> left);
    return (start -> data % 2 == 0) + BSTEvens(start -> right) + BSTEvens(start -> left);
        
}