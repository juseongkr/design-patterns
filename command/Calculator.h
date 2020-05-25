#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__

#include <cmath>

class Calculator {
private:
	int value;

public:
	Calculator() = delete;

	Calculator(int val) : value(val) { }

	int square() const {
		return value * value;
	}

	int sqrt() const {
		return std::sqrt(value);
	}

	int log10() const {
		return std::log10(value);
	}
};

#endif /* __CALCULATOR_H__ */
