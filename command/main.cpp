#include <iostream>
#include "Command.h"

int main(int argc, char *argv[])
{
	Command *user = new Command(20);

	std::cout << user->run("square") << std::endl;
	std::cout << user->run("sqrt") << std::endl;
	std::cout << user->run("log10") << std::endl;

	for (const auto cmd : user->getCommandLog()) {
		std::cout << cmd << "(), ";
	}
	std::cout << std::endl;

	delete user;

	return 0;
}
