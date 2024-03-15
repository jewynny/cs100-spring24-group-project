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
    void removeSong(int index);
    void addSongs(Song songToAdd);
    void setPlaylistName(std::string name) { PlaylistName = name; }
    void showSongsInPlaylist();
    string getPlaylistName() {return PlaylistName;}
    size_t getPlaylistSize() const { return Songs.size(); } 

    private:
    vector<Song> Songs;
    std::string PlaylistName;

};

#endif  //PLAYLIST_HPP