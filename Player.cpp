#include "Player.h"
#include <iostream>

void Player::ShowSpec ()
{
    std::cout << "Battery life: " << batteryLife_ << std::endl; 
    std::cout << "Total tracks: " << totalTracks_ << std::endl;
}