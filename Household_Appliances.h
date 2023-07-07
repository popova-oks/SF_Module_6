#pragma once
#include <iostream>
#include "IElectronics.h"

class Household_Appliances : virtual public IElectronics
{
public:
    Household_Appliances(int weight) : 
        weight_(weight) {}

    ~Household_Appliances() override {}
    const std::string get_nameType() override { return nameType_; }    
protected:
    int weight_;
    const std::string nameType_{ "Household Appliances" };
};