#ifndef RECOMMENDATIONS_HPP
#define RECOMMENDATIONS_HPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include "../header/Song.hpp"

using namespace std;

class Recommendations {
    public: 
    void addToPlaylist();
    void readCSV(istream &input, vector< vector<string> > &output);

    private:
    std::list<Song*> newSongs;

};

#endif  //RECCOMENDATIONS_HPP