#pragma once
#include "Household_Appliances.h"

class Iron final: public Household_Appliances
{
pudlic:
    Iron (int maxTemperature) : maxTemperature_(maxTemperature) {};
    ~Iron () override {};
    void Iron () override {};
private:
    int maxTemperature_;
}