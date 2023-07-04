#pragma once
#include "Portable_electronics.h"

class Player final: public Portable_electronics
{
pudlic:
    Player (int totalTracks) : totalTracks_(totalTracks) {}
    ~Player () override {}
    void ShowSpec () override {};
private:
    int totalTracks_;
}