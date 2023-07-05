#pragma once
#include "Household_Appliances.h"

class Iron final: public Household_Appliances
{
public:
    Iron (int weight, int maxTemperature):
       Household_Appliances(weight),
       maxTemperature_(maxTemperature) {}
    
    ~Iron () override {}
    void ShowSpec() override;
private:
    int maxTemperature_;
};