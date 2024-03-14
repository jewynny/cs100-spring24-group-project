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
    std::vector<Playlist> playlists;

    //getters need to implement ...

    private:
    std::string name;
    
};

#endif  //USER_HPP