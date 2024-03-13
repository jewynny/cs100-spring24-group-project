#include "../header/Recommendations.hpp"
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>
#include <cstdlib>

using namespace std;

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
        
        newSongs.emplace_back(artist, albumName, songName, genre);
    }
}

vector<Song> Recommendations::getRecommendations()
{
    return newSongs;
}
