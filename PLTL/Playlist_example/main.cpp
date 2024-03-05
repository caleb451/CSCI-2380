#include <iostream>
#include <string>
#include "playlistWithLinkedList.h"
using namespace std;

int main(){
    Playlist myplaylist;

    myplaylist.addSongs("OMG");
    myplaylist.addSongs("My Boo");
    myplaylist.addSongs("Yea!");

    myplaylist.printList();
    myplaylist.deleteSong("Yea!");
    myplaylist.deleteSong("OMG");
    myplaylist.printList();

    myplaylist.addSongs("Confessions");
    myplaylist.printList();
}