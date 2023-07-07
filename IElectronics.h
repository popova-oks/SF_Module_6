#pragma once
#include <iostream>
#include <string>

class IElectronics
{
public:
    IElectronics() {}
    virtual void ShowSpec() = 0;
    virtual const std::string& get_name() const = 0;
    virtual const std::string& get_nameDevice() const = 0;
    virtual const std::string get_nameType() = 0;
    virtual ~IElectronics() = default;
};