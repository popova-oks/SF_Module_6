#pragma once
#include "IElectronics.h"

class Portable_Electronics : virtual public IElectronics 
{
public:
    Portable_Electronics (int batteryLife) : batteryLife_(batteryLife) {}
    ~Portable_Electronics () override {}
    void ShowSpec () override {};

protected:
    int batteryLife_;    
}