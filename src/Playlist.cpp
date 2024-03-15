#include "../header/Playlist.hpp"

Playlist::Playlist(std::string name) {
    PlaylistName = name;
}

Playlist::Playlist() {
    PlaylistName = "";
}

void Playlist::printSongs() {

}

void Playlist::addSongs(Song songToAdd) {
    Songs.push_back(songToAdd);
}

void Playlist::removeSong(int index) {  // assuming an index will be sent
    Songs.erase(Songs.begin() + index);
}

void Playlist::showSongsInPlaylist() {
    for (int i = 0; i < Songs.size(); i++){
        cout << "Song " << i+1 << ": " << Songs[i].getArtist() << " - " << Songs[i].getTitle() << endl;
    }
}