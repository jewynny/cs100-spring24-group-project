#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"
using namespace std;
#include <iostream>
#include <vector>
// using namespace std;

class User {
    public: 
    // i made these inline, but we can change these - jan
    void setName(std::string userName) { name = userName; }
    void setFaveSong(std::string song) { faveSong = song; }
    void makePlaylist();
    void viewPlaylistSongs();
    void viewPlaylists();

    private:
    std::string name;
    std::string faveSong;
    vector<Playlist*> playlists;

};

#endif  //USER_HPP