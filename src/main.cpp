#include "../header/Playlist.hpp"
#include "../header/User.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

//functions
void createProfileMenu(User profile);
void makePlaylistMenu(User profile);        // call every time user wants to make a new playlist
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
  
  //create new profiles

  cout << "Would you like to create another profile? (y/n)";
  string anotherProfile;
  cin >> anotherProfile;
  while (anotherProfile=="y"){
    (*profiles)[totalProfile] = User();
    createProfileMenu(profiles->at(totalProfile)); 
    makePlaylistMenu(profiles->at(totalProfile));  
    cout << "Would you like to create another profile? (y/n)";
    cin >> anotherProfile;
    totalProfile++;
  }

  //switch between profiles
  cout << "/n Please enter the profile name to choose a profile." << endl;
  string name;
  getline(cin, name);
  int i = 0;
  for(i = 0; i<totalProfile; ++i){
    if ((*profiles)[i].getName()==name){
      cout << "You are in profile " << name << " right now, enjoy!"<< endl;
      exit;
    }
  }

  cout << "Would you like to see the playlists that are tied to your profile? y or n " << endl;
  string seePlaylists;
  cin >> seePlaylists;
  if (seePlaylists == "y"){
    (*profiles)[i].viewPlaylists();
  }

return 0;
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
    User(userName, faveSong); 
}

void makePlaylistMenu(User profile) {
  // VARIABLES
  string playlistName;
  
  // PROMPT USER
  cout << "Hello " << profile.getName() << endl;
  cout << "Enter the name of your playlist: ";
  getline(cin, playlistName);
  profile.addAPlaylist(playlistName);
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