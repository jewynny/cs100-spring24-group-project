#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"

#include <iostream>
// using namespace std;

class User {
    public: 
    User()
    {
        name = "";
        faveSong = "";
    }
    User(std::string n, std::string fS)
    {
        name = n;
        faveSong = fS;
    }
    /*
    might need these later idk
    void setName(std::string userName) { name = userName; }
    void setFaveSong(std::string song) { faveSong = song; }
    */
    void makePlaylist();
    void viewPlaylist();

    private:
    std::string name;
    std::string faveSong;

};

#endif  //USER_HPP