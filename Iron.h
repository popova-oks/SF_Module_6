#pragma once
#include "Household_Appliances.h"

class Iron final: public Household_Appliances
{
public:
    Iron (int maxTemperature) : maxTemperature_(maxTemperature) {}
    ~Iron () override {}
    void ShowSpec() override {};
private:
    int maxTemperature_;
};