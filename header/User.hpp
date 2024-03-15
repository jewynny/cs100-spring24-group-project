#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"
#include <vector>
#include <iostream>
// using namespace std;

class User {
    
    public: 
    User();

    User(std::string userName);
    ~User(); // for joseph to do hehe
    std::string getName() {return name;}
    void addAPlaylist(std::string playlistName);
    void viewPlaylistSongs();
    void viewPlaylists();
    void addSongToPlaylist(User&); //for joseph to do hehe
    void deleteSongs (User& user); 
    void showSongsFromPlaylist(User&);


    private:
    std::string name;
    std::string faveSong;
    std::vector<Playlist> playlists;
};

#endif  //USER_HPP
