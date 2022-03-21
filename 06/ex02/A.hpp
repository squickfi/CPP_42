#pragma once

#include "Base.hpp"

class A : public Base {
	public:
		A() { std::cout << "A constructor" << std::endl; }
};