#include <iostream>
#include <cstring>
#include "Calc.h"

int main(int argc, char *argv[])
{
	Calc *old = new Calc();
	std::cout << old->calculate("sub", 20, 10) << std::endl;

	MyCalc *my = new MyCalc();
	std::cout << my->add(20, 10) << std::endl;

	CalcAdapter *adapter = new CalcAdapter();
	std::cout << adapter->calculate("add", 15, 5) << std::endl;

	delete old;
	delete my;
	delete adapter;

	return 0;
}
