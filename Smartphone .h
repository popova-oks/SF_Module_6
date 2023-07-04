#pragma once
#include "Portable_electronics.h"

class Smartphone final: public Portable_electronics
{
pudlic:
    Smartphone (int screenSize) : screenSize_(screenSize) {};
    ~Smartphone () override {};
    void ShowSpec () override {};
private:
    int screenSize_;
}