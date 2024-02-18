#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"

#include <iostream>
// using namespace std;

class User {
    public: 
    // i made these inline, but we can change these - jan
    void setName(std::string userName) { name = userName; }
    void setFaveSong(std::string song) { faveSong = song; }
    void makePlaylist();
    void viewPlaylist();

    private:
    std::string name;
    std::string faveSong;

};

#endif  //USER_HPP