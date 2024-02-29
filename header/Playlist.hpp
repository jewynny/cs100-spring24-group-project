#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

//FILES
#include "../header/Song.hpp"


class Playlist {
    public: 
    void printSongs();
    void addSongs();
    void removeSong();
    void getReccomendations();
    void setPlaylistName(std::string name) { PlaylistName = name; }

    private:
    std::vector<Song*> Songs;
    std::string PlaylistName;

};

#endif  //PLAYLIST_HPP