#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {

    std::cout << "Default constructor called\n";
}

Fixed::Fixed(const int raw) : value(raw << bits) {

    std::cout << "Constructor with an integer called\n";
}

Fixed::Fixed(const float raw) {

    int pow = 1 << bits;

    value = (int)roundf(raw * pow);
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

int Fixed::toInt() const {

    return (value >> bits);
}

float Fixed::toFloat() const {

    int pow = 1 << bits;

    return ((float)value / (float)pow);
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

std::ostream &operator<<(std::ostream &out, const Fixed &f) {

    out << f.toFloat();
    return (out);
}