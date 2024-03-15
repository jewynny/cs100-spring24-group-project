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
        cout << "Playlist " << i+1 << ": " << playlists.at(i).getPlaylistName() << endl;
    }
}

void User::addSongToPlaylist(User& user){
    string userSongTitle;
    string userArtist;
    cout << "\nWhat is the title of the song you'd like to add? " << endl;
    cout << "Enter song title: ";
    getline(cin, userSongTitle);
    cout << "What is the artist of the song you'd like to add? " << endl;
    cout << "Enter song artist: ";
    getline(cin, userArtist);
    cout << "Which playlist would you like to add a song to?" << endl;
    viewPlaylists();
    int playlistNum;
    cin >> playlistNum;
    Song newSong(userSongTitle," ",userArtist," ");
    (user.playlists.at(playlistNum - 1)).addSongs(newSong);
    cout << userArtist << " - " << userSongTitle << " added to playlist " << user.playlists.at(playlistNum - 1).getPlaylistName() << endl;
}

void User::deleteSongs (User& user){
    cout << "\nIn which playlist would you like to remove a song?" << endl;
    viewPlaylists();
    int playlistNum;
    cin >> playlistNum;
    (user.playlists.at(playlistNum - 1)).showSongsInPlaylist();
    cout << "Select the respective number of the song you would like to remove: ";
    int songNum;
    cin >> songNum;
    (user.playlists.at(playlistNum - 1)).removeSong(songNum);
}

void User::showSongsFromPlaylist(User& user){
    cout << "Which playlists' songs would you like to view?" << endl;
    user.viewPlaylists();
    int playlistNum; 
    cin >> playlistNum;
    (user.playlists.at(playlistNum - 1)).showSongsInPlaylist();
}