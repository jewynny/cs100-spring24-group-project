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
    void readCSV(ifstream &input);
    void getRecommendations();

    private:
    vector<Song> newSongs;

};

#endif  //RECCOMENDATIONS_HPP