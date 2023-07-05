#pragma once
#include "Portable_electronics.h"
#include <iostream>

class Smartphone final: public Portable_Electronics
{
public:
    Smartphone (int batteryLife, int screenSize) : 
        Portable_Electronics(batteryLife),
        screenSize_(screenSize) {std::cout << "Smartphone created" << std::endl;}
        
    ~Smartphone () override {std::cout << "Smartphone deleted" << std::endl;}
    void ShowSpec () override;
private:
    int screenSize_;
};