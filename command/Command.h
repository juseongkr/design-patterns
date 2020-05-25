#ifndef __COMMAND_H__
#define __COMMAND_H__

#include <vector>
#include <cstring>
#include "Calculator.h"

class Command {
private:
	Calculator *calc;
	std::vector<std::string> cmd;

public:
	Command() = delete;

	Command(int val) {
		this->calc = new Calculator(val);
	}

	int run(std::string command) {
		this->cmd.push_back(command);

		if (command == "square") {
			return this->calc->square();
		} else if (command == "sqrt") {
			return this->calc->sqrt();
		} else if (command == "log10") {
			return this->calc->log10();
		}

		throw std::invalid_argument("invalid operator");
	}

	std::vector<std::string> getCommandLog() const {
		return this->cmd;
	}

	~Command() {
		delete this->calc;
	}
};

#endif /* __COMMAND_H__ */
