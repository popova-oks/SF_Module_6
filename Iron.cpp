#include "Iron.h"
#include <iostream>

void Iron::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << std::endl; 
    std::cout << "Max Temperature: " << maxTemperature_ << std::endl;
}