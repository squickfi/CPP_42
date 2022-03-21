#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {

    std::cout << "Default constructor called\n";
}

Fixed::~Fixed() {

    std::cout << "Destructor called\n";
}

int Fixed::getRawBits()const {

    std::cout << "getRawBits() called\n";
    return (value);
}

void Fixed::setRawBits(const int raw) {

    std::cout << "setRawBits(int raw) called\n";
    value = raw;
}

Fixed::Fixed(const Fixed &other) {

    value = other.value;
    std::cout << "Copy constructor called\n";
}

Fixed &Fixed::operator= (const Fixed  &other) {

    value = other.value;
    std::cout << "Copy assigment operator called\n";
    return (*this);
}
