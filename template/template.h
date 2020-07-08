#ifndef __TEMPLATE_H__
#define __TEMPLATE_H__
#define PROF_SALARY 15
#define STUD_SALARY 0

#include <cstring>

class Person {
private:
	std::string name;
	int salary;

public:
	Person() : name(""), salary(0) { }
	Person(int s) : name(""), salary(s) { }
	Person(const std::string n, int s) : name(n), salary(s) { }

	std::string getName() const {
		return this->name;
	}

	int getSalary() const {
		return this->salary;
	}

	virtual std::string getInfo() const = 0;
	virtual ~Person() { }
};

class Student : public Person {
public:
	Student() : Person(STUD_SALARY) { }
	Student(const std::string n) : Person(n, STUD_SALARY) { }
	
	std::string getInfo() const override {
		return this->getName() + " is Student";
	}
};

class Professor : public Person {
public:
	Professor() : Person(PROF_SALARY) { }
	Professor(const std::string n) : Person(n, PROF_SALARY) { }

	std::string getInfo() const override {
		return this->getName() + " is Professor";
	}
};

#endif /* __TEMPLATE_H__ */
