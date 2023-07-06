#include <iostream>
#include "Smartphone.h"

void Smartphone::ShowSpec ()
{
    std::cout << "Battery life: " << batteryLife_ << " h\n"; 
    std::cout << "Screen size: " << screenSize_ << " inch\n";
}