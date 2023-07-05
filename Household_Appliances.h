#pragma once
#include <iostream>
#include "IElectronics.h"

class Household_Appliances : virtual public IElectronics
{
public:
    Household_Appliances(int weight) : 
        weight_(weight) {std::cout << "Household_Appliances created" << std::endl;}

    ~Household_Appliances() override {std::cout << "Household_Appliances deleted" << std::endl;}
    void ShowSpec () override;
protected:
    int weight_;
};