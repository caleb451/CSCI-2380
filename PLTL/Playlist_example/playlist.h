#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

class Playlist {
    private:
        int numOfSongs;
        string *songs;
        int top;
    public:
        Playlist():numOfSongs(5), top(-1){
            songs = new string[numOfSongs];
        }
        void addSongs(string song){
            if(top == numOfSongs - 1){
                //double the size of the array
                numOfSongs *= 2;
                string *newSongArr = new string[numOfSongs]; //new array
                for(int i = 0; i < top; i++){
                    newSongArr[i] = songs[i]; //copies from old array into the new array
                }
                delete[] songs; //delete memory
                songs = newSongArr; //old array copies new array
            }
            songs[top++] = song;
        }
        void removeSong(){
            if(top == -1)
                cout << "This is an empty playlist. Nothing to delete." << endl;
            else{
                songs[top] = " ";
                top--;
            }
        }
        void displayTopSong(){
            if(top == -1)
                cout << "This is an empty playlist. No top song." << endl;
            else
                cout << "Top Song: " << songs[top] << endl;
        }
        void displaySongs(){
            //order in they were added
            /*for(int i = 0; i < numOfSongs; i++){
                cout << songs[i] << endl;
            }*/
            //order of the stack
            for(int i = top; i >= 0; i--){
                cout << songs[i] << endl;
            }
        }
        ~Playlist(){
            delete[] songs;
        }
};