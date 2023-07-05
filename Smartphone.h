#pragma once
#include "Portable_electronics.h"

class Smartphone final: public Portable_Electronics
{
public:
    Smartphone (int screenSize) : screenSize_(screenSize) {};
    ~Smartphone () override {};
    void ShowSpec () override {};
private:
    int screenSize_;
};