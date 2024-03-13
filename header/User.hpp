#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"
#include <vector>
#include <iostream>
// using namespace std;

class User {
    
    public: 
    User();

    User(std::string userName, std::string userFavoriteSong);
    ~User(); // for joseph to do hehe
    std::string getName() {return name;}
    std::string getfaveSong() {return faveSong;}
    void addAPlaylist(std::string playlistName);
    void viewPlaylistSongs();
    void viewPlaylists();

    //getters need to implement ...

    private:
    std::string name;
    std::string faveSong;
    std::vector<Playlist> playlists;
};

#endif  //USER_HPP