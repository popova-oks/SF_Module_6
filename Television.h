#pragma once
#include "Household_Appliances.h"

class Television final: public Household_Appliances
{
public:
    Television (int screenSize) : screenSize_(screenSize) {}
    ~Television () override {};
    void ShowSpec () override {};
private:
    int screenSize_;
};