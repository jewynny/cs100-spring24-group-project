#include "../header/Playlist.hpp"

Playlist::Playlist(std::string name) {
    PlaylistName = name;
}

Playlist::Playlist() {
    PlaylistName = "";
}

void Playlist::printSongs() {

}

void Playlist::addSongs(Song *songToAdd) {
    Songs.push_back(songToAdd);
}

void Playlist::removeSong(int index) {  // assuming an index will be sent
    Songs.erase(Songs.begin() + index);
}

void Playlist::getReccomendations() {
    
}