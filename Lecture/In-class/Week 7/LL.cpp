#include <iostream>
using namespace std;

#include "LinkedList.h"
int main(){
    //Declare 3 nodes and link them
        //1 -> 2 -> 3
    //use a pointer "head" for the address of the first node
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head -> next = second;
    second -> next =  third;

    //if easy, try without declaring another pointer besides "head"
    head -> next = new Node(2);
    (head -> next) -> next = new Node(3);

    //if super easy, use a loop to print the daya of the 3 nodes
        //Start with a temporary pointer
    for (Node* current = head; current != nullptr; current = current -> next){
        cout << current -> data << " ";
    }
    cout << endl;

    LinkedList nextNode;

    nextNode.insertBack(5);
    nextNode.insertBack(8);
    nextNode.insertBack(9);
    nextNode.insertBack(23);
    nextNode.printList();
    nextNode.removeNode(9);
    nextNode.printList();

    

    
}