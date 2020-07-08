#ifndef __STRATEGY_H__
#define __STRATEGY_H__

class Pizza {
public:
	Pizza() { }

	virtual int getPrice() const = 0;
};

class CheesePizza : public Pizza {
private:
	int price;

public:
	CheesePizza() : price(15) { }

	int getPrice() const override {
		return this->price;
	}
};

class PepperoniPizza : public Pizza {
private:
	int price;

public:
	PepperoniPizza() : price(17) { }

	int getPrice() const override {
		return this->price;
	}
};

class Store {
public:
	Store() { }

	int getPrice(Pizza *pizza=nullptr) const {
		if (pizza) {
			return pizza->getPrice();
		}
		return 0;
	}
};

#endif /* __STRATEGY_H__ */
