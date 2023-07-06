#pragma once
#include <iostream>
#include "IElectronics.h"

class Portable_Electronics : virtual public IElectronics 
{
public:
    Portable_Electronics (int batteryLife) : 
        batteryLife_(batteryLife) {}

    ~Portable_Electronics () override {}
    const std::string get_nameType() override { return nameType_; }
protected:
    int batteryLife_;
    const std::string nameType_{ "Portable_Electronics" };
};