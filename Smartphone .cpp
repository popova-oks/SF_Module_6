#include "Smartphone.h"
#include <iostream>

void Smartphone::ShowSpec ()
{
    std::cout << "Battery life: " << batteryLife_ << std::endl; 
    std::cout << "Screen size: " << screenSize_ << std::endl;
}