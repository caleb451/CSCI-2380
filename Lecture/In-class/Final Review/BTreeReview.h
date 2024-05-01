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

TreeNode* buildTree(){
    //manually create the tree for the following values returns a pointer to the root node
    //13, 19, 15, 16, 2, 6, 7, 18, 12, 3
    TreeNode * root = new TreeNode(13);

    root -> left = new TreeNode(2); // 13 -> 2 left side
    root -> left -> right = new TreeNode(6); //2 -> 6 right side
    root -> left -> right -> left = new TreeNode(3); // 6 -> 3 left side
    root -> left -> right -> right = new TreeNode(7); // 6 -> 7 right side
    root -> left -> right -> right -> right = new TreeNode(12); // 7 -> 12 right side
    root -> right = new TreeNode(19); // 13 -> 19 right side
    root -> right -> left = new TreeNode(15); // 13 -> 15 left side
    root -> right -> left -> right = new TreeNode(16); // 15 -> 16 left side
    root -> right -> left -> right -> right = new TreeNode(18); // 16 -> 18 right side

    return root;
}

// explain and define a ffunction to find the minimum value
    // in the tree
    // input: pointer to the root node of tree
    // returns: 
int minVal(TreeNode * root){
    //you check if the left side of the root is not a null ptr
    //this'll indicate that there is a leaf present meaning
    //there is a lesser value.
    int minValue;
    TreeNode * current = root;
    if(root == nullptr){
        cout << "ERROR! No Tree";
        return -1;
    }
    while(current -> left != nullptr){
        minValue = current -> left -> data;
        current = current -> left;
    }
    return minValue;
}

// define a function that counts the number of values
    // that are in the array
    // Tree Values: 13, 19, 15, 16, 2, 6, 7, 18, 12, 3
    // int arr[] = {4, 0, 15, 12, 99, 6}
    // length = 6
        // this should return 3 (15, 12, and 6)
int findVals(TreeNode * root, int arr[], int length){
    //We need to find what how many similar values are in the
    //tree and the array. Compare if the root data is equivalent
    //to arr[i] and if it is increase count. and call the recursive
    //call to go until root == nullptr
    TreeNode * current = root;
    int count = 0;
    int i = 0;

    for(int i = 0; i < length; i++){
        if(valInTree(arr[i], current)){
            count++;
        }
    }
    return count;
}

bool valInTree(int val, TreeNode * root){
    if(root == nullptr)
        return false;
    if(val == root -> data)
        return true;
    if(val > root -> data)
       return valInTree(val, root -> right);
    if(val < root -> data)
       return valInTree(val, root -> left);
}