#pragma once
#include "Household_Appliances.h"

class Iron final: public Household_Appliances
{
public:
    Iron (const std::string& name, int weight, int maxTemperature):
       Household_Appliances(weight),
       name_(name),
       maxTemperature_(maxTemperature) {}
    
    ~Iron () override {}
    void ShowSpec() override;
    const std::string& get_name() const override { return name_; }
    const std::string& get_nameDevice() const override { return device_; }

private:
    int maxTemperature_; 
    const std::string name_;
    const std::string device_{ "The Iron" };
};