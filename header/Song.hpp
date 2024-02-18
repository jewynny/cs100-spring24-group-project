#ifndef SONG_HPP
#define SONG_HPP

#include <iostream>
#include <list>

class Song {
    public: 
    void printGenre();
    void printDuration();
    void printProducer();
    void printAlbum();

    private:
    std::string genre;
    int duration;
    std::string producer;
    std::string album;

};

#endif  //SONG_HPP