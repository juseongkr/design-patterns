#include <iostream>
#include <cstring>
#include "Pizza.h"
#include "Factory.h"

int main(int argc, char *argv[])
{
	PizzaFactory *factory = new PizzaFactory();

	Pizza *myCheesePizza = factory->makePizza("cheese");
	Pizza *myPepperoniPizza = factory->makePizza("pepperoni");

	std::cout << myCheesePizza->getType() << std::endl;
	std::cout << myPepperoniPizza->getType() << std::endl;

	delete myCheesePizza;
	delete myPepperoniPizza;

	return 0;
}
