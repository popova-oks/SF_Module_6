#pragma once
#include "Portable_Electronics.h"
#include "Household_Appliances.h"

class Electric_Razor final : public Portable_Electronics, Household_Appliances
{
    public:
    Electric_Razor (const std::string& name, int batteryLife, int weight, int blades) :
        Portable_Electronics (batteryLife), 
        Household_Appliances (weight),
        name_(name),
        numBlades_(blades) {}

    ~Electric_Razor () override {}
    void ShowSpec () override;
    const std::string& get_name() const override { return name_; }
    const std::string& get_nameDevice() const override { return device_; }
    const std::string get_nameType() override;

private:
    int numBlades_;
    const std::string name_;
    const std::string device_{ "The Electric Razor" };
};
