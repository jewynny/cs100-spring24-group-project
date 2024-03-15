#include <gtest/gtest.h>
#include "../header/Song.hpp"
#include "../header/Playlist.hpp"
#include "../header/Recommendations.hpp"
#include "../header/User.hpp"

TEST(UserTests, testDefaultConstructor) {
    User user;
    EXPECT_TRUE(user.getName() == "");
}

TEST(UserTests, testParametrizedConstructor) {
    std::string userName = "Mathew";
    User user(userName);
    EXPECT_TRUE(user.getName() == userName);
}

TEST(UserTests, testAddPlaylist) {
    User user;
    string playlistName = "playlist1";
    EXPECT_NO_THROW ( {
        user.addAPlaylist(playlistName);
    } );
}

TEST(UserTests, testViewPlaylists) {
    User user;
    string playlistName = "playlist1";
    user.addAPlaylist(playlistName);
    EXPECT_NO_THROW ( {
        user.viewPlaylists();
    } );
}

TEST(PlaylistTests, testDefaultConstructor) {
    Playlist aPlaylist;
    EXPECT_EQ(aPlaylist.getPlaylistName(), "");
}

TEST(PlaylistTests, testParametrizedConstructor) {
    Playlist aPlaylist("songname");
    EXPECT_EQ(aPlaylist.getPlaylistName(), "songname");
}

TEST(PlaylistTests, testAddSong) {
    Playlist playlist("My Playlist");  // Create a playlist object
    Song songToAdd("Song Title", "Artist Name");  // Create a song object

    // Add the song to the playlist
    playlist.addSongs(songToAdd);

    // Check if the song is added successfully by checking the size of the playlist
    EXPECT_EQ(playlist.getPlaylistSize(), 1);
}

TEST(PlaylistTests, testRemoveSong) {
    Playlist playlist("My Playlist"); 
    Song songToAdd("Song Title", "Artist Name"); 

    // Add the song to the playlist
    playlist.addSongs(songToAdd);

    // Remove the song from the playlist
    playlist.removeSong(0);  // Assuming the index is correct

    // Check if the song is removed successfully by checking the size of the playlist
    EXPECT_EQ(playlist.getPlaylistSize(), 0);
}

TEST(PlaylistTests, testShowSongs) {
    Playlist playlist("My Playlist"); 
    Song songToAdd("Song Title", "Artist Name"); 

    playlist.addSongs(songToAdd);
    
    EXPECT_NO_THROW ( {
        playlist.showSongsInPlaylist();
    } );
}

/*TEST(RecommendationTests, testRandom) {
    Recommendations rec;
    vector<int> vect {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    rec.random_unique(vect.begin(), vect.end(), 5);
    EXPECT_TRUE(vect.size() == 5);
}*/

TEST(SongTests, testDefaultConstructor) {
    Song aSong;
    EXPECT_TRUE(aSong.getTitle() == "");
}

TEST(SongTests, testParametrizedConstructor) {
    string title = "Hello";
    string genre = "Soul music";
    string artist = "Adele";
    string album = "25";
    Song aSong(title, genre, artist, album);
    EXPECT_EQ(aSong.getTitle(), "Hello");
}

TEST(SongTests, testOverloadedParametrizedConstructor) {
    string title = "Hello";
    string artist = "Adele";
    Song aSong(title, artist);
    EXPECT_TRUE(aSong.getArtist() == "Adele");
}


int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
