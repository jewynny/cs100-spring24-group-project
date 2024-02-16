 > As you complete each section you **must** remove the prompt text. Every *turnin* of this project includes points for formatting of this README so keep it clean and keep it up to date. 
 > Prompt text is any lines beginning with "\>"
 > Replace anything between \<...\> with your project specifics and remove angle brackets. For example, you need to name your project and replace the header right below this line with that title (no angle brackets). 
## Spotilike - Music Recommender
 
Authors: [Mathew Winkles](https://github.com/Mathyu03), [Janelle Gwynn](https://github.com/jewynny), [Joseph Caraan](https://github.com/jczy3), [Fiona Ye](https://github.com/fionaye3)

## Project Description (Phase I)

### Why is it important to us?
* Music is a big part of our group members' lives, and we would like to connect to others through music, as well as ourselves
### What languages/tools/technologies do we plan to use?
* Our backend will be programmed using C++
* We plan to use the Spotify API to manipulate playlists, using songs and their respective metadata
### What will be the input/output of your project?
* Output will prompt user to create a user profile 
* Alternatively, the user can link their spotify account to skip this step (if applicable)
* Afterwards, the program will collect data of the users favorite songs/genres/producers/etc.
* User will get output for a list of 10 recommended songs based on the input from the previous steps
* User can either continue and get more songs in increments of 10, or choose to make another user profile, repeating the same steps as before
* If there are 2 user profiles in the system, user has the option to compare these profiles. They will receive an output for a playlist of another 10 songs, matching the preferences of both combined users.
### What are the features that the project provides?
* Ability to make multiple user profiles with favorite songs/genres/producers/etc. (User profile class with individual characteristics/variables)
* Recommends similar songs based on the users music preferences (Pulled from spotify API, matching the characteristics outlined above)
* Can compare music tastes with other users by creating a merged playlist with similar vibes (Finds matches between two user profiles, and pulls from spotify API using combined characteristics)

## Design Document (Phase II)

* Epics and user stories can be seen in the projects tab

### Navigation Diagram / User Interface Specification
![image](https://github.com/cs100/final-project-mwink004-jhamo001-jcara025-wye024/assets/99463753/ab02d697-d7cd-4d8c-b357-3916645314db)

### Screen Layouts
* Messages and text are STC, but this will give the general idea of what the screens will look like in the terminal.
```
// Welcome Screen Menu
Welcome! Song Recommender

// Users
Start by creating a user profile
-----------------------------------------------
Name :
Favorite Song :
Playlist Name :

-----------------------------------------------
// Make Playlist
Hello <user name>
Do you want to make a playlist? Y/N :
-----------------------------------------------
// Reccomendations
Song Recommendations Based on Your Fave Song
-----------------------------------------------
1. song 1
2. song 2
...
10. song 10

Which songs would you like to add (enter each 
corresponding # and enter "done" when completed)

Playlist : (users playlist name)
-----------------------------------------------
1. song 1                     Author 1, Album 1
2. song 2                     Author 2, Album 2

*********************
total duration : 455s

Actions
1. remove song
2. ask for more reccomendations
3. finish playlist
4. start new playlist
```

### Class Diagram (UML)
<img width="436" alt="Screenshot_2024-02-16_at_3 47 15_PM" src="https://github.com/cs100/final-project-mwink004-jhamo001-jcara025-wye024/assets/99463753/0d27a220-3ae5-4d76-8409-567020c470d8">


### Class Diagram Description
* A user class is needed to use the program. Each user has a name to identify them as well as a favorite song. The faveSong string is for giving a basis for recommendations for the user later on. The member functions consist of setters for the name and faveSong (setName, setFaveSong). There also are functions for making a playlist (makePlaylist, discussed in next bullet point) and one for viewing all the playlists the user has made (viewPlaylists).
* The playlist class is something that can be made by the user. It has a HAS-A relationship with the user, a User can have a a Playlist. Each playlist has a name (playlistName) and it consists of a list of song objects (list<Song*>). The member functions of a playlist consist of printSongs to print all the songs in the playlist, addSong to add a song to the playlist, removeSong to remove a song from the playlist, getRecommendations to get 10 songs based off the users interests, and setPlaylistName for a setter for the object.
* The song class has a composition relationship with playlist. This is becuase within the functionality of our program, you can't have a song by itself, it will be in a playlist or have no functionality. Each song has a genre, duration, producer, and album. The member functions within song print the aforementioned variables.
* Lastly, there is an object called Recommendations. It has a dependency relationship with Playlist, since Playlist returns the recommendations in one of its member functions. It consists of a list of songs as well, but these are fixed to 10 at a time. You can do the same thing with these songs as the ones from the songs class, however it has an added member function addToPlaylist. This is for if the user likes one or more of the recommendations and wants to add it to a playlist they own.

 
 > ## Phase III
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on week 8 during lab time.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
