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

bool checkLeaf(TreeNode * node){
    return (node -> left == nullptr && node -> right == nullptr);
}

int nodeLevel(TreeNode * root, int target){
    int level = 0;
    TreeNode * current = root;
    //assume we have a root node
    if(root == nullptr)
        return -1;
    while(current -> data != target){
        if(checkLeaf(current))
            return -1;
        else if(current -> data > target){
            current = current -> left;
            level++;
        }
        else if(current -> data < target){
            current = current -> right;
            level++;
        }

        if(current == nullptr)
            return -1;
    }
    return level;
}

int nodeLevelR(TreeNode * root, int target){
    int count = 0;
    TreeNode * current = root;
    if(current == nullptr)
        return count - 1;
    if(current -> data == target)
        return count;
    else if(target < current -> data){
        count++;
        nodeLevel(current -> left, target);
    }
    else if(target > current -> data){
        count++;
        nodeLevel(current -> right, target);
    }
    return count;
}

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