#include <iostream>
#include "Header.h"

int main (int argc, char *argv[])
{
    IElectronics *ptr_1 = new Electric_Razor (100, 10, 5);

    ptr_1->ShowSpec();

    IElectronics* ptr_2 = new Smartphone (11, 6);
    ptr_2->ShowSpec();

    delete ptr_1;
    delete ptr_2;
    return 0;
}