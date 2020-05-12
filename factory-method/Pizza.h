#ifndef __PIZZA_H__
#define __PIZZA_H__

class Pizza {
public:
	Pizza() { }
	virtual std::string getType() const = 0;
	virtual ~Pizza() { }
};

class CheesePizza : public Pizza {
private:
	std::string type;

public:
	CheesePizza() : type("cheese pizza") { }

	std::string getType() const override {
		return this->type;
	}
};

class PepperoniPizza : public Pizza {
private:
	std::string type;

public:
	PepperoniPizza() : type("pepperoni pizza") { }

	std::string getType() const override {
		return this->type;
	}
};

#endif /* __PIZZA_H__ */
