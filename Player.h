#pragma once
#include "Portable_Electronics.h"

class Player final : public Portable_Electronics
{
public:
    Player (int totalTracks) : totalTracks_(totalTracks) {}
    ~Player () override {}
    void ShowSpec () override {};
private:
    int totalTracks_;
};