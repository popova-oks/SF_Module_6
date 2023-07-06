#pragma once
#include "Household_Appliances.h"

class Television final: public Household_Appliances
{
public:
    Television (const std::string &name, int weight, int screenSize) :
        Household_Appliances(weight),
        name_(name),
        screenSize_(screenSize) {}
        
    ~Television () override {}
    void ShowSpec () override;
    const std::string& get_name() const override { return name_; }
    const std::string& get_nameDevice() const override { return device_; }

private:
    int screenSize_;
    const std::string name_;
    const std::string device_{ "The Television" };    
};