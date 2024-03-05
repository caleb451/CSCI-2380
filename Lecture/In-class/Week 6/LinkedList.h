//Node class for a linked list

class Node{
    public:
        //our node holds an integer
        int data;
        //location of the next node
        Node* next;

        //Define a constructor for our Node
            //input parameter to set the data (default is zero)
            //next should be a nullptr
        Node(int inData = 0){
            data = inData;
            next = nullptr;
        }
};