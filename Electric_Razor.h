#pragma once
#include "Portable_Electronics.h"
#include "Household_Appliances.h"

class Electric_Razor final : public Portable_Electronics, Household_Appliances
{
    public:
    Electric_Razor (int batteryLife, int weight, int blades) :        
        Portable_Electronics (batteryLife), 
        Household_Appliances (weight),
        numBlades_(blades) {}

    ~Electric_Razor () override {};
    void ShowSpec () override {};
private:
    int numBlades_;
};