#include "../header/User.hpp"
#include <iostream>

using namespace std;

User::~User(){
    //delete profile
    delete profile;
    //delete playlist in each profile
    while (currnode != nullptr){
        delete currnode;
    }
    //delete each song from a playlist (if allocated)
    
}