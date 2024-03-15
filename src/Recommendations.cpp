#include "../header/Recommendations.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

// fisher yates algorithm, choose m random elements from a vector with n elements 
template<class bidiiter>
bidiiter random_unique(bidiiter begin, bidiiter end, size_t num_random) {
    size_t left = std::distance(begin, end);
    while (num_random--) {
        bidiiter r = begin;
        std::advance(r, rand()%left);
        std::swap(*begin, *r);
        ++begin;
        --left;
    }
    return begin;
}

// Reads The Song From A Vector And Puts It Into The Song Vector
void Recommendations::readCSV(ifstream& input) 
{
    string line;
   // Skip Header Of CSV File
    getline(input, line);

    while (getline(input, line)) 
    {
        stringstream in(line);
        string artist, albumName, songName, genre;
        getline(in, artist, ',');
        getline(in, albumName, ',');
        getline(in, songName, ',');
        getline(in, genre);
        // initialize song object
        Song newSong(songName, genre, artist, albumName);
        // push into vector of songs
        newSongs.push_back(newSong);
    }
}

void Recommendations::getRecommendations()
{
    cout << "Here are 10 recommended songs." << endl;
    random_unique(newSongs.begin(), newSongs.end(), 10);
    for (int i = 0; i < 10; ++i)
    {
        cout << i+1 << ". " << newSongs[i].getArtist() << " - " << newSongs[i].getTitle() << endl;
    }
}