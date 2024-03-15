#include "../header/User.hpp"
#include "../header/Playlist.hpp"
#include "../header/Recommendations.hpp"
#include <iostream>
#include <vector>
using namespace std;

 User::User()
{
    name = "";
    faveSong = "";
}

User::User(std::string userName, std::string userFavoriteSong)
{
    name = userName;
    faveSong = userFavoriteSong;
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
 }

void User::viewPlaylists(){
    cout << "Here's the list of playlists that you created on your profile: /n";
    for (int i = 0; i<playlists.size(); i++){
        cout << i+1 << ": " << playlists.at(i).getPlaylistName() << endl;
    }
    cout << "Enjoy!" << endl;
}

void User::addSongToPlaylist(User& user, string songTitle, string songArtist){
    cout << "Which playlist would you like to add a song to?" << endl;
    viewPlaylists();
    char playlistNum;
    cin >> playlistNum;
    //input validation
    Song newSong(songTitle,songArtist);
    user.playlists.at(static_cast<int>(playlistNum) - 1).addSongs(newSong);
}