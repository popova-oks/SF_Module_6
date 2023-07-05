#pragma once

class IElectronics
{
public:
    IElectronics() { std::cout << "IElectronics created" <<std::endl; }
    virtual void ShowSpec() = 0;
    virtual ~IElectronics() { std::cout << "IElectronics deleted" << std::endl; }
};