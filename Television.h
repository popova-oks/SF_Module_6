#pragma once
#include "Household_Appliances.h"

class Television final: public Household_Appliances
{
public:
    Television (int weight, int screenSize) : 
        Household_Appliances(weight),
        screenSize_(screenSize) {}
        
    ~Television () override {}
    void ShowSpec () override;
private:
    int screenSize_;
};