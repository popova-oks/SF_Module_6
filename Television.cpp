#include "Television.h"
#include <iostream>

void Television::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << std::endl; 
    std::cout << "Screen size: " << screenSize_ << std::endl;
}