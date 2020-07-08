#include <iostream>
#include "template.h"

int main(int argc, char *argv[]) {

	Person *student = new Student("Mike");
	Person *prof = new Professor("Jake");

	std::cout << student->getInfo() << std::endl;
	std::cout << student->getName() + "'s salary is " << student->getSalary() << std::endl;

	std::cout << prof->getInfo() << std::endl;
	std::cout << prof->getName() + "'s salary is " << prof->getSalary() << std::endl;

	delete student;
	delete prof;

	return 0;
}
