#ifndef SONG_HPP
#define SONG_HPP

#include <iostream>
#include <list>

class Song {
    public: 
    Song(std::string songTitle, std::string songGenre, std::string songArtist) {
        title = songTitle;
        genre = songGenre;
        artist = songArtist;
    }
    
    Song() {
        title = "";
        genre = "";
        artist = "";
    }
    void printGenre();
    void printDuration();
    void printProducer();
    void printAlbum();

    private:
    std::string title;
    std::string genre;
    std::string artist;

};

#endif  //SONG_HPP