#ifndef PLAYLIST_HPP
#define PLAYLIST_HPP

//FILES
#include "../header/Song.hpp"
#include <vector>

using namespace std;    //could take out

class Playlist {
    public:
    Playlist(); 
    Playlist(std::string name);
    void printSongs();
    void addSongs(Song *songToAdd);
    // int findSong(); to maybe use with remove song?
    void removeSong(int index);
    void getReccomendations();
    void setPlaylistName(std::string name) { PlaylistName = name; }

    private:
    vector<Song*> Songs;
    std::string PlaylistName;

};

#endif  //PLAYLIST_HPP