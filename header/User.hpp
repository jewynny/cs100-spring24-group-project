#ifndef USER_HPP
#define USER_HPP

#include "../header/Playlist.hpp"
#include <vector>
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
    ~User();
    // i made these inline, but we can change these - jan
    void setName(std::string userName) { name = userName; }
    void setFaveSong(std::string song) { faveSong = song; }
    void makePlaylist();
    void viewPlaylist();

    private:
    std::string name;
    std::string faveSong;
    vector<Playlist> Playlist;
};

#endif  //USER_HPP