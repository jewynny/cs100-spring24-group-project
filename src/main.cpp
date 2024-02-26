#include "../header/Playlist.hpp"
#include "../header/User.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//functions
void createProfileMenu(User profile);
void makePlaylistMenu(User profile);
void reccomendationMenu(User profile);
void printPlaylist(User profile);

int main(){

  // VARIBLES
  vector<User> *profiles = new vector<User>;
  int totalProfile = 1;
  profiles->resize(totalProfile);
  cout << "Welcome to Spotilike Music Recommender!";

  // change index later to totalProfile and 
  // increment when another profile is made
  (*profiles)[0] = User();
  
  createProfileMenu(profiles->at(0));
  makePlaylistMenu(profiles->at(0));
  reccomendationMenu(profiles->at(0));
  printPlaylist(profiles->at(0));
  totalProfile++;
  
}

void createProfileMenu(User profile)
{
    // VARIABLES
    string userName;
    string faveSong;

    // PROMPT USER
    cout << "Please create a user profile.\n";
    cout << "Name: ";
    getline(cin, userName);
    cout << "\nFavorite song: ";
    getline(cin, faveSong);
    cout << "Thank you for creating a profile!" << endl;

    // SET USER PROFILE
    profile.setName(userName);
    profile.setFaveSong(faveSong);  
}

void makePlaylistMenu(User profile) {
  // VARIABLES
  string playlistName;
  
  // PROMPT USER
  cout << "Hello " << profile.getName() << endl;
  cout << "Enter the name of your playlist: ";
  getline(cin, playlistName);

  // call make playlist (?)
}

void reccomendationsMenu(User profile){
  // VARIABLES
  string reccomendation;
  
  // PROMPT USER
  cout << "Song recomenndations based on your favorite song:" << endl;
  for (int i=1;i<=10;i++){
    cout << i << ". " << reccomendation << endl;
  }
}

void printPlaylist(User profile){
  // VARIABLES
  
  // PROMPT USER
  cout << "Playlist : " << playlist.getName();
}