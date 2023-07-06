#include <iostream>
#include "Television.h"

void Television::ShowSpec ()
{
    std::cout << "Weight: " << weight_ << " g\n"; 
    std::cout << "Screen size: " << screenSize_ << " inch\n";
}