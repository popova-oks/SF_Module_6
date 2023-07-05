#pragma once
#include "Portable_electronics.h"

class Smartphone final: public Portable_Electronics
{
public:
    Smartphone (int batteryLife, int screenSize) : 
        Portable_Electronics(batteryLife),
        screenSize_(screenSize) {}
        
    ~Smartphone () override {}
    void ShowSpec () override {};
private:
    int screenSize_;
};