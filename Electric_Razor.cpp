#include <iostream>
#include "Electric_Razor.h"

void Electric_Razor::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << " g\n";
    std::cout << "Battery life: " << batteryLife_ << " h\n";
    std::cout << "The number of blades: " << numBlades_ << std::endl;
}

const std::string Electric_Razor::get_nameType()
{
    const std::string str = Portable_Electronics::get_nameType() + ", " + Household_Appliances::get_nameType();
    return str;
}