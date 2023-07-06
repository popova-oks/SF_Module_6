#pragma once
#include "Portable_Electronics.h"

class Player final : public Portable_Electronics
{
public:
    Player (const std::string& name, int batteryLife, int totalTracks) :
        Portable_Electronics(batteryLife),
        name_(name),
        totalTracks_(totalTracks) {}

    ~Player () override {}
    void ShowSpec () override;
    const std::string& get_name() const override { return name_; }
    const std::string& get_nameDevice() const override { return device_; }

private:
    int totalTracks_;
    const std::string name_;
    const std::string device_{ "The Player" };
};