#include "Point.hpp"

Point::Point() : x(), y() {}

Point::Point(float x, float y) : x(x), y(y) {}

Point::~Point() {}

Point::Point(const Point &other) : x(other.x), y(other.y) {}

Point &Point::operator = (const Point &other) {

	x.setRawBits(other.x.getRawBits());
	y.setRawBits(other.y.getRawBits());
	return (*this);
}

float Point::getXvalue() const {

	return (x.toFloat());
}

float Point::getYvalue() const {
	
	return (y.toFloat());
}