#include "../header/Playlist.hpp"
#include "../header/User.hpp"
#include <iostream>
#include <string>

using namespace std;

void printMenu()
{
    User user;
    string userName;
    string faveSong;

    cout << "Welcome to Spotilike Music Recommender!";
    cout << "To begin, please create a user profile.";
    cout << "Name: ";
    getline(cin, userName);
    cout << "\nFavorite song: ";
    getline(cin, faveSong);
    user.setName(userName);
    user.setFaveSong(faveSong);

    cout << "Hello " << userName    

}

