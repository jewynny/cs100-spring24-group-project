#include "../header/User.hpp"
#include <iostream>
using namespace std;

void User::viewPlaylists(){
    cout << "Here's the list of playlists that you created on your profile: /n";
    for (int i = 0; i<playlists.size(); i++){
        cout << i+1 << ": " << playlists.at(i)->getPlaylistName() << endl;
    }
    cout << "Enjoy!" << endl;
}