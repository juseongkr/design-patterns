#include <iostream>
#include <cstring>
#include "Singleton.h"

int main(int argc, char *argv[])
{
	Singleton *foo = Singleton::createInstance("foo");
	Singleton *boo = Singleton::createInstance("boo");

	std::cout << foo->getData() << std::endl;
	std::cout << boo->getData() << std::endl;

	return 0;
}
