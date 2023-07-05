#pragma once
#include <iostream>
#include "IElectronics.h"

class Portable_Electronics : virtual public IElectronics 
{
public:
    Portable_Electronics (int batteryLife) : 
        batteryLife_(batteryLife) {std::cout << "Portable Electronics created" << std::endl;}

    ~Portable_Electronics () override {std::cout << "Portable Electronics deleted" << std::endl;}
    void ShowSpec () override;

protected:
    int batteryLife_;    
};