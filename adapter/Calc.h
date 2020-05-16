#ifndef __CALC_H__
#define __CALC_H__

class Calc {
public:
	Calc() { }

	int calculate(const std::string op, int x, int y) const {
		if (op == "add") {
			return x + y;
		} else if (op == "sub") {
			return x - y;
		}
		throw std::invalid_argument("invalid operator");
	}
};

class MyCalc {
public:
	MyCalc() { }

	int add(int x, int y) const {
		return x + y;
	}

	int sub(int x, int y) const {
		return x - y;
	}
};

class CalcAdapter {
private:
	MyCalc *calculator;

public:
	CalcAdapter() {
		this->calculator = new MyCalc();
	}

	int calculate(const std::string op, int x, int y) const {
		if (op == "add") {
			return this->calculator->add(x, y);
		} else if (op == "sub") {
			return this->calculator->sub(x, y);
		}
		throw std::invalid_argument("invalid operator");
	}
};

#endif /* __CALC_H__ */
