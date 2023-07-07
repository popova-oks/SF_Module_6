#pragma once
#include "Portable_electronics.h"
#include <iostream>

class Smartphone final: public Portable_Electronics
{
public:
    Smartphone (const std::string& name, int batteryLife, int screenSize) :
        Portable_Electronics(batteryLife),
        name_(name),
        screenSize_(screenSize) {}
        
    ~Smartphone () override {}
    void ShowSpec () override;
    const std::string& get_name() const override { return name_; }
    const std::string& get_nameDevice() const override { return device_; }
private:
    int screenSize_;
    const std::string name_;
    const std::string device_{ "The Smartphone" };
};