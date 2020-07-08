#include <iostream>
#include "strategy.h"

int main(int argc, char *argv[]) {

	Store *store = new Store();

	std::cout << store->getPrice() << std::endl;
	std::cout << store->getPrice(new CheesePizza()) << std::endl;
	std::cout << store->getPrice(new PepperoniPizza()) << std::endl;

	delete store;

	return 0;
}
