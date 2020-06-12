#ifndef __STATE_H__
#define __STATE_H__

#include <cstring>
#include <vector>

class State {
private:
	std::string state;

public:
	State() = delete;

	State(std::string s) : state(s) { }

	std::string getState() const {
		return this->state;
	}
};

class Machine {
private:
	State* state;

public:
	Machine() : state(nullptr) { }

	Machine(State *state) : state(nullptr) {
		this->change(state);
	}

	void change(State *state) {
		if (this->state)
			delete this->state;
		this->state = state;
	}

	std::string sign() const {
		if (this->state)
			return this->state->getState();
		return "";
	}

	~Machine() {
		delete this->state;
	}
};

#endif /* __STATE_H__ */
