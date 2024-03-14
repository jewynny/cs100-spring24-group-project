#include <gtest/gtest.h>
#include "../header/Song.hpp"
#include "../header/Playlist.hpp"
#include "../header/Recommendations.hpp"
#include "../header/User.hpp"

TEST(TESTSUITE, TESTTITLE) {
    // template
}

TEST(PlaylistTests, testConstructor) {
    Playlist aPlaylist("songname");
    EXPECT_EQ(aPlaylist.getPlaylistName(), "songname");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}