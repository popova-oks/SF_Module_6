#include <iostream>
#include "Iron.h"

void Iron::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << std::endl; 
    std::cout << "Max Temperature: " << maxTemperature_ << std::endl;
}