#include <iostream>
using namespace std;

#include "LinkedList.h"

int main(){
    //use dynamic allocation to make a new Node
    Node* start = new Node; //Node has no data and no valid pointer
    //give the node a data of 1
    start -> data = 1; //(*start).data = 1;

    //use dynamic allocation to make a node with a 2
    Node* second = new Node;
    second -> data = 2;

    start -> next = second;

    //print the data of the first node
    cout << start -> data << endl;
    cout << second -> data << endl;
    cout << (start -> next) -> data << endl;

    //create a new node for a 3, without declaring another pointer
    //have this node be the next after second
    second -> next = new Node;

    //assign this new node with a 3
    (second -> next) -> data = 3;

    //make a temprary pointer "temp" at point 3
    Node* temp = new Node;
    //use temp to declare another node with a 4 (use input parameter)
    ((second -> next) -> next) = temp;
    temp -> data = 4;
    //move temp to Node 4
    temp = temp -> next;
    //use temp to declare another node with a 5

    //move temp to Node 5
}