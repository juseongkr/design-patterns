#include <iostream>
#include "Observer.h"
#include "Subject.h"

int main(int argc, char *argv[])
{
	Subject *subject = new Subject();

	Observer *ob1 = new Observer(15);
	Observer *ob2 = new Observer(120);

	subject->subscribe(ob1);
	subject->subscribe(ob2);

	subject->nofity("square");
	subject->printObservers();

	subject->nofity("log10");
	subject->printObservers();

	delete subject;

	return 0;
}
