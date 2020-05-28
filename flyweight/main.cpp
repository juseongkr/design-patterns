#include <iostream>
#include "Juice.h"

int main(int argc, char *argv[])
{
	JuiceFactory *factory = new JuiceFactory();

	Juice *tom = factory->orderJuice("orange", 10.5);
	Juice *park = factory->orderJuice("orange", 10.5);
	Juice *joy = factory->orderJuice("apple", 8.5);

	if (tom == park) {
		std::cout << "Same juice" << std::endl;
	} else {
		std::cout << "Different juice" << std::endl;
	}

	if (tom == joy) {
		std::cout << "Same juice" << std::endl;
	} else {
		std::cout << "Different juice" << std::endl;
	}

	std::cout << factory->countJuices() << std::endl;
	std::cout << factory->getRevenue() << std::endl;

	delete factory;

	return 0;
}
