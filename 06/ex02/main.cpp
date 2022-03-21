#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void) {

	int num = rand() % 3;

	switch (num)
	{
	case 0:
		return new A;

	case 1:
		return new B;

	case 2:
		return new C;
	}
	return NULL;
}

void identify(Base *p) {

	A *a;
	if ((a = dynamic_cast<A *>(p))) {

		std::cout << "A" << std::endl;
		return ;
	}

	B *b;
	if ((b = dynamic_cast<B *>(p))) {

		std::cout << "B" << std::endl;
		return ;
	}

	C *c;
	if ((c = dynamic_cast<C *>(p))) {

		std::cout << "C" << std::endl;
		return ;
	}
}

void identify(Base &p) {

	try {

		A &a = dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		(void)a;
		return ;
	}
	catch(const std::exception& e) {}

	try {

		B &b = dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		(void)b;
		return ;
	}
	catch(const std::exception& e) {}

	try {

		C &c = dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		(void)c;
		return ;
	}
	catch(const std::exception& e) {}	
}

void test() {

	Base *ptr;

	ptr = generate();
	identify(ptr);
	delete ptr;

	ptr = generate();
	identify(*ptr);
	delete ptr;

	std::cout << std::endl;
}

void testRef() {

	Base *ptr;

	ptr = generate();
	identify(*ptr);
	delete ptr;
}

int main() {

	test();
	test();
	test();
	test();
	test();

	return 0;
}
