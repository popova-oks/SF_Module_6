#include <iostream>
#include "Player.h"

void Player::ShowSpec ()
{
    std::cout << "Battery life: " << batteryLife_ << " h\n"; 
    std::cout << "Total tracks: " << totalTracks_ << std::endl;
}