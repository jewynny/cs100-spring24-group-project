#include "../header/User.hpp"
#include "../header/Playlist.hpp"
#include "../header/Recommendations.hpp"
#include <iostream>
#include <vector>
using namespace std;

 User::User()
{
    name = "";
}

User::User(std::string userName)
{
    name = userName;
}

User::~User(){
    // //delete each playlist in user's profile
    // for(int i = 0; i < playlist.size(); i++){
    //     //delete each song from a playlist before deleting a playlist
    //     for (int j = 0; j < Songs.size(); j++){
    //         delete Songs[j];    
    //     }
    //     //after deleting each song from a playlist, delete the playlist
    //     delete Playlist[i];
    // }
}   

void User::addAPlaylist(std::string playlistName) {
    Playlist newPlaylist(playlistName);
    playlists.push_back(newPlaylist);
    cout << "Playlist \"" << playlistName << "\" created." << endl;
 }

void User::viewPlaylists(){
    cout << "Here's the list of playlists that you created on your profile: " << endl;
    if(playlists.size() == 0)
    {
        cout << "You have no playlists." << endl;
    }
    for (int i = 0; i<playlists.size(); i++){
        cout << i+1 << ": " << playlists.at(i).getPlaylistName() << endl;
    }
}

void User::addSongToPlaylist(User& user, string songTitle, string songArtist){
    cout << "Which playlist would you like to add a song to?" << endl;
    viewPlaylists();
    int playlistNum;
    cin >> playlistNum;
    //input validation
    Song newSong(songTitle," ",songArtist," ");
    (user.playlists.at(playlistNum - 1)).addSongs(newSong);
    (user.playlists.at(playlistNum - 1)).showSongsInPlaylist();
}
