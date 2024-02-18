#ifndef RECCOMENDATIONS_HPP
#define RECCOMENDATIONS_HPP

#include "../header/Song.hpp"

class Reccomendations {
    public: 
    void addToPlaylist();
    
    private:
    std::list<Song*> newSongs;

};

#endif  //RECCOMENDATIONS_HPP