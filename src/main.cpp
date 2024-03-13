#include "../header/Song.hpp"
#include "../header/Playlist.hpp"
#include "../header/Recommendations.hpp"
#include "../header/User.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// functions
void createProfileMenu(User user);
void makePlaylistMenu(User user);
void displayMenu(User user, Recommendations recommendations);
char validateInput(char choice);

int main() {
  // open music.csv file for recommendations
  ifstream inputMusic;
  inputMusic.open("musiclist.csv");
  readCSV(inputMusic);
  Recommendations recommendations;
  // VARIBLES
  User user;
  cout << "Welcome to Spotilike Music Recommender!";

  createProfileMenu(user);
  while(true) {
    displayMenu(user);
    char choice = validateInput(userInput);
    
      if (choice == '1'){
        makePlaylistMenu(user);
       }
      else if (choice == '2'){
        user.viewPlaylists();
      }
      else if (choice == '3'){
         // to do (joseph)
      }
      else if (choice == '4'){
        // to do (fiona)
      }
      else if (choice == '5'){
        recommendations.getRecommendations(); // still have to implement this
      }
      else if (choice == '6'){
        break;
      }
      
    }
  }


  return 0;
}

char validateInput(char choice) {
    while (choice <= 48 || choice >= 55) {
      cout << "Please enter a valid choice 1-6." << endl;
    }
  return choice;
}

void displayMenu(User user) {
    cout << "Hello " << user.getName() <<  " please select an action" << endl;
    cout << "1. Create a playlist" << endl;
    cout << "2. View playlists" << endl;
    cout << "3. Add songs to playlist" << endl;
    cout << "4. Delete songs from a playlist" << endl;
    cout << "5. Get recommendations" << endl;
    cout << "6. Quit" << endl;
}

void createProfileMenu(User user) {
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
  user(userName, faveSong);
}

void makePlaylistMenu(User user) {
  // VARIABLES
  string playlistName;

  // PROMPT USER
  cout << "Hello " << user.getName() << endl;
  cout << "Enter the name of your playlist: ";
  getline(cin, playlistName);

  // call make playlist (?)
  user.addAPlaylist(playlistName);
}
