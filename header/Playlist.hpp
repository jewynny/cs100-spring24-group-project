#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

//FILES
#include "../header/Song.hpp"
#include <vector>
using namespace std;

class Playlist {
    public:
    Playlist(); 
    Playlist(std::string name);
    void printSongs();
    // int findSong(); to maybe use with remove song?
    void removeSong(int index);
    void addSongs(Song* songToAdd);
    void getReccomendations();
    void setPlaylistName(std::string name) { PlaylistName = name; }
    string getPlaylistName() {return PlaylistName;}

    private:
    vector<Song*> Songs;
    std::string PlaylistName;

};

#endif  //PLAYLIST_HPP