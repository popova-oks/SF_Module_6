#pragma once
#include <vector>
#include "Header.h"

class Warehouse
{
public:
	Warehouse();
	~Warehouse();

	void create_Warehouse();
	void show_goods();
	void display_good(IElectronics* el);

private:
	std::vector <IElectronics*> goods_;	
};

