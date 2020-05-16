#ifndef __JUICE_H__
#define __JUICE_H__

#include <cstring>
#include <unordered_map>

class Juice {
private:
	std::string flavour;
	double price;

public:
	Juice() = delete;

	Juice(const std::string flv, double pri) : flavour(flv), price(pri) { }

	std::string getFlavour() const {
		return this->flavour;
	}

	double getPrice() const {
		return this->price;
	}
};

class JuiceFactory {
private:
	std::unordered_map<std::string, Juice*> juices;

public:
	JuiceFactory() { }

	std::unordered_map<std::string, Juice*> &getJuices() {
		return this->juices;
	}

	Juice *orderJuice(const std::string flv, double pri) noexcept {
		if (this->getJuices().count(flv)) {
			return this->getJuices().find(flv)->second;
		} else {
			Juice *juice = new Juice(flv, pri);
			this->getJuices()[flv] = juice;
			return juice;
		}
	}

	double getRevenue() {
		double rev {.0f};
		for (const auto &it : this->juices) {
			rev += it.second->getPrice();
		}
		return rev;
	}

	int countJuices() const {
		return this->juices.size();
	}

	~JuiceFactory() {
		for (const auto &it : this->juices) {
			delete it.second;
		}
		this->juices.clear();
	}
};

#endif /* __JUICE_H__ */
