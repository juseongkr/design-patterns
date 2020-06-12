#include <iostream>
#include "state.h"
using namespace std;

int main(int argc, char *argv[])
{
	State *s1 = new State("Red");
	State *s2 = new State("Blue");
	State *s3 = new State("Black");

	Machine *machine = new Machine();

	machine->change(s1);
	std::cout << "Current state: " << machine->sign() << std::endl;

	machine->change(s2);
	std::cout << "Current state: " << machine->sign() << std::endl;

	machine->change(s3);
	std::cout << "Current state: " << machine->sign() << std::endl;

	delete machine;

	return 0;
}
