#include "Fixed.hpp"

class Point {

	private:
		Fixed const x;
		Fixed const y;
		// Fixed x;
		// Fixed y;

	public:
		Point();
		Point(float x, float y);
		~Point();
		Point(const Point &other);

		Point &operator = (const Point &other);

		float getXvalue() const;
		float getYvalue() const;
};
