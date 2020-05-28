#ifndef __OBSERVER_H__
#define __OBSERVER_H__

#include <cmath>
#include <cstring>

class Observer {
private:
	int state;

public:
	Observer(int st) : state(st) { }

	int getState() const {
		return this->state;
	}

	void update(const std::string cmd) {
		if (cmd == "square") {
			this->state = this->state * this->state;
		} else if (cmd == "sqrt") {
			this->state = sqrt(this->state);
		} else if (cmd == "log10") {
			this->state = log10(this->state);
		}
	}
};

#endif /* __OBSERVER_H__ */
