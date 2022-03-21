#include "Fixed.hpp"

int main( void ) {
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a < b = " << (int)(a < b) << std::endl;
	std::cout << "a >= b = " << (int)(a >= b) << std::endl;
	std::cout << "Fixed::max = " << Fixed::max( a, b ) << std::endl;
	std::cout << "Fixed::min = " << Fixed::min( a, b ) << std::endl;
	return 0;
}