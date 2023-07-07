#include "Warehouse.h"

Warehouse::Warehouse()
{
	create_Warehouse();	
}

void Warehouse::create_Warehouse()
{
	goods_.push_back(new Electric_Razor("Philips", 1, 150, 3));
	goods_.push_back(new Electric_Razor("Xiaomi", 2, 180, 3));
	goods_.push_back(new Iron("Redmond", 550, 200));
	goods_.push_back(new Iron("Maxwell", 500, 180));
	goods_.push_back(new Player("Digma", 15, 100));
	goods_.push_back(new Player("Sony", 16, 120));
	goods_.push_back(new Smartphone("Apple", 24, 7));
	goods_.push_back(new Smartphone("Samsung", 36, 8));	
	goods_.push_back(new Television("Samsung", 6800, 43));
	goods_.push_back(new Television("Samsung", 20000, 65));
}

Warehouse::~Warehouse()
{
	for (auto ptr : goods_)
	{
		delete ptr;
	}
}

void Warehouse::show_goods()
{
	while (true)
	{
		std::cout << "Select an action:\n"
			<< "p - show portable electronics\n"
			<< "h - show household appliances\n"
			<< "q - quit.\n";
		std::cout << "Enter: ";
		char ch;
		std::cin >> ch;

		if (ch == 'q')
			break;

		switch (ch)
		{
		case 'p':
		{
			for (auto ptr : goods_)
			{
				if (auto c = dynamic_cast<Portable_Electronics*>(ptr))
				{
					display_good(c);
				}
			}
			break;
		}
		case 'h':
		{
			for (auto ptr : goods_)
			{
				if (auto c = dynamic_cast<Household_Appliances*>(ptr))
				{
					display_good(c);
				}
			}
			break;
		}
		default:
		{
			std::cout << "Try agan \n";
			break;
		}
		}
		std::cout << "------------------------------------------------------------------\n";
	}
}

void Warehouse::display_good(IElectronics* el)
{
	std::cout << "\nType: " << el->get_nameType() << "\n";
	std::cout << "Name: " << el->get_nameDevice() << " - " << el->get_name() << "\n";
	std::cout << "Specification:\n";
	el->ShowSpec();
	std::cout << "\n";
}