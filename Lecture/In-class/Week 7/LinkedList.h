//Node class for a linked list
#include <iostream>
class Node{
    public:
        //our node holds an integer
        int data;
        //location of the next node
        Node* next;
        Node* prev;

        //Define a constructor for our Node
            //input parameter to set the data (default is zero)
            //next should be a nullptr
        Node(int inData = 0){
            data = inData;
            next = nullptr;
            prev = nullptr;
        }
};

class LinkedList {
    public:
        //pointers the first and last nodes ("head" and "tails")
        Node *head, *tail;

        //define a constructor
            //head and tail should point to nothing
        LinkedList(){
            head = nullptr;
            tail = nullptr;
        }

        //methods
        //insertBack()
            //place a new Node at the end of the list
            //inout parameter: int data for the new node
        void insertBack(int inData){
            //is head empty?
            if(head == nullptr){
                head = new Node(inData);
                tail = head;
            }
            //the list is not empty
            else{
                //make the new node after tail
                tail -> next = new Node(inData);
                //move tail to the next node (end)
                tail = tail -> next;
            }
        }
        //insertFront()
            //place a new node at the beginning of the list
            //input parameter: 
        void insertFront(int inData){
            Node* temp = new Node(inData);
            if(tail == nullptr){
                tail = temp;
                head = tail;
            }
            else{
                head -> prev = temp;
                temp -> next = head;
                head = head -> prev;
            }
        }
        void printList(){
            for (Node* current = head; current != nullptr; current = current -> next){
                cout << current -> data << " ";
            }
            cout << endl;
        }
        //findNode()
            //if you find a node with some data that matches target data
            //return the address of that node
        //input parameter: int target to search for
        //returns: a pointer to the node with the target data or nullptr
        Node* findNode(int target){
            for(Node* current = head; current != nullptr; current = current -> next){
                //if value is found, return the current node
                if(current -> data == target){
                    return current;
                }
            }
            return nullptr;
        }
        void removeNode(int target){
            Node* temp = new Node();
            Node* targetNode = findNode(target);
            temp = head;
            head = temp -> next;
            for(Node* temp = head; temp != nullptr; temp = temp -> next){
                if(temp -> next == targetNode){
                    temp -> next = targetNode -> next;
                    
                    if(temp -> next == nullptr){
                        tail = temp;
                    }
                    delete targetNode;
                    break;
                }
            }
        }
};