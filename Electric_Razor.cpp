#include <iostream>
#include "Electric_Razor.h"

void Electric_Razor::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << std::endl;
    std::cout << "Battery life: " << batteryLife_ << std::endl;
    std::cout << "The number of blades in the Razor: " << numBlades_ << std::endl;
}