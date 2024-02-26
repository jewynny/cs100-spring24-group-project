#include "../header/Playlist.hpp"
#include "../header/User.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

void printMenu()
{
    vector<User> profiles;
    string userName;
    string faveSong;

    cout << "Welcome to Spotilike Music Recommender!" << endl;
    cout << "To begin, please create a user profile." << endl;
    cout << "Name: ";
    getline(cin, userName);
    cout << "\nFavorite song: ";
    getline(cin, faveSong);
    User user1(userName, faveSong);
    profiles.push_back(user1);

    cout << "Hello " << 

}

