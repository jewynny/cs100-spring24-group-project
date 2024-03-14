#ifndef SONG_HPP
#define SONG_HPP

#include <iostream>
#include <list>

class Song {
    public: 
    Song(std::string songTitle, std::string songGenre, std::string songArtist, std::string songAlbumName) {
        title = songTitle;
        genre = songGenre;
        artist = songArtist;
        albumName = songAlbumName;
    }
    
    Song(std::string songTitle, std::string songArtist) {
        title = songTitle;
        artist = songArtist;
    }

    Song() {
        title = "";
        genre = "";
        artist = "";
        albumName = "";
    }
    
    std::string getTitle() {return title;}
    std::string getGenre() {return genre;}
    std::string getArtist() {return artist;}
    std::string getAlbumName() {return albumName;}

    private:
    std::string title;
    std::string genre;
    std::string artist;
    std::string albumName;

};

#endif  //SONG_HPP