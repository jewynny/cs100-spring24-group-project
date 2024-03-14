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
    template<class bidiiter>
    bidiiter random_unique(bidiiter begin, bidiiter end, size_t num_random);
    
    private:
    vector<Song> newSongs;

};

#endif  //RECCOMENDATIONS_HPP