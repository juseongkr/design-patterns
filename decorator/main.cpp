#include <iostream>
#include <cstring>
#include <unordered_map>
#include "Pizza.h"

int main(int argc, char *argv[])
{
	Pizza *pepperoni = Pizza::addPepperoni(new Pizza());

	std::cout << pepperoni->getTopping() << std::endl;
	std::cout << pepperoni->getPrice() << std::endl;
	std::cout << pepperoni->hasTopping("pepperoni") << std::endl;

	pepperoni = Pizza::addCheese(pepperoni);

	std::cout << pepperoni->getTopping() << std::endl;
	std::cout << pepperoni->getPrice() << std::endl;
	std::cout << pepperoni->hasTopping("cheese") << std::endl;

	Pizza *cheese = Pizza::addCheese(new Pizza());

	std::cout << cheese->getTopping() << std::endl;
	std::cout << cheese->getPrice() << std::endl;
	std::cout << cheese->hasTopping("pepperoni") << std::endl;

	delete pepperoni;
	delete cheese;

	return 0;
}
