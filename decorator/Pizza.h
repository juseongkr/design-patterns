#ifndef __PIZZA_H__
#define __PIZZA_H__

class Pizza {
private:
	std::unordered_map<std::string, int> topping;
	double price;

public:
	Pizza() : price(0.0f) { }

	void addTopping(const std::string top, double price) {
		this->topping[top]++;
		this->price += price;
	}

	std::string getTopping() {
		std::string ret;
		for (const auto t : this->topping) {
			ret += (t.first + ", ");
		}
		return ret;
	}

	double getPrice() const {
		return this->price;
	}

	bool hasTopping(const std::string top) const {
		return this->topping.count(top);
	}

	static Pizza *addCheese(Pizza *pizza) {
		pizza->addTopping("cheese", 5.5f);
		return pizza;
	}

	static Pizza *addPepperoni(Pizza *pizza) {
		pizza->addTopping("pepperoni", 10.5f);
		return pizza;
	}
};

#endif /* __PIZZA_H__ */
