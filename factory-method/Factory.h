#ifndef __FACTORY_H__
#define __FACTORY_H__

class PizzaFactory {
public:
	PizzaFactory() { }

	Pizza *makePizza(const std::string str) const {
		if (str == "cheese") {
			return new CheesePizza();
		} else if (str == "pepperoni") {
			return new PepperoniPizza();
		}
		throw std::invalid_argument("invalid pizza");
	}
};

#endif /* __FACTORY_H__ */
