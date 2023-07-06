#include <iostream>
#include "Iron.h"

void Iron::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << " g\n"; 
    std::cout << "Max Temperature: " << maxTemperature_ << " C\n";
}