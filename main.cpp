#include <iostream>
#include "Header.h"

int main (int argc, char *argv[])
{
    Warehouse* wh = new Warehouse();
    wh->show_goods(); 

    delete wh;
    return 0;
}