#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"
#include <vector>
#include <iostream>
// using namespace std;

class User {
    
    public: 
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
    /*
    might need these later idk
    void setName(std::string userName) { name = userName; }
    void setFaveSong(std::string song) { faveSong = song; }
    */
    void makePlaylist();
    void viewPlaylistSongs();
    void viewPlaylists();

    //getters need to implement ...

    User::~User(); // for joseph to do hehe

    private:
    std::string name;
    std::string faveSong;
    std::vector<Playlist> playlists;
};

#endif  //USER_HPP