#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

//FILES
#include "../header/Song.hpp"
using namespace std;


class Playlist {
    public: 
    void printSongs();
    void addSongs(Song* songToAdd);
    void removeSong();
    void getReccomendations();
    void setPlaylistName(std::string name) { PlaylistName = name; }
    string getPlaylistName() {return PlaylistName;}

    private:
    std::vector<Song*> Songs;
    std::string PlaylistName;

};

#endif  //PLAYLIST_HPP