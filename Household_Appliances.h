#pragma once
#include "IElectronics.h"

class Household_Appliances : virtual public IElectronics
{
public:
    Household_Appliances(int weight) : weight_(weight) {}
    ~Household_Appliances() override {}
    void ShowSpec () override;
protected:
    int weight_;
};