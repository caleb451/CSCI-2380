#include <iostream>
#include <string>
using namespace std;

class Node{
    public:
        //our node holds an integer
        string data;
        //location of the next node
        Node* next;
        Node* prev;

        //Define a constructor for our Node
            //input parameter to set the data (default is zero)
            //next should be a nullptr
        Node(string song){
            data = song;
            next = nullptr;
        }
};

class Playlist {
    public:
        Node *head, *tail;
        int count;
        Playlist(){
            head = nullptr;
            tail = nullptr;
        }
        void addSongs(string song){
            Node* temp = new Node(song);
            //is head empty?
            if(head == nullptr){
                head = temp;
                tail = temp;
            }
            //the list is not empty
            else{
                //make the new node after tail
                temp -> next = head;
                //move tail to the next node (end)
                head = temp;
            }
            count++;
        }
        void deleteSong(string song){
            Node* temp = head;
            if(count == 1){
                head = nullptr;
                tail = nullptr;
            }
            else{
                head = temp -> next;
                temp -> next = nullptr;
                head -> prev = nullptr;
            }
            delete temp;
        }
        void printList(){
            for (Node* current = head; current != nullptr; current = current -> next){
                cout << current -> data << " ";
            }
            cout << endl;
        }
        Node* findSong(string target){
            for(Node* current = head; current != nullptr; current = current -> next){
                //if value is found, return the current node
                if(current -> data == target){
                    return current;
                }
            }
            return nullptr;
        }
};