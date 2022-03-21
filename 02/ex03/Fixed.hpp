#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {

	private:
		static const int	bits;
		mutable int 		value;

	public:
		Fixed();
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();
		Fixed(const Fixed &other);

		Fixed &operator = (const Fixed &other);
		bool operator > (const Fixed &other) const;
		bool operator < (const Fixed &other) const;
		bool operator >= (const Fixed &other) const;
		bool operator <= (const Fixed &other) const;
		bool operator == (const Fixed &other) const;
        bool operator != (const Fixed &other) const;

		Fixed operator + (const Fixed &other);
		Fixed operator - (const Fixed &other);
		Fixed operator * (const Fixed &other);
		Fixed operator / (const Fixed &other);

		Fixed &operator ++ ();
		Fixed operator ++ (int);
		Fixed &operator -- ();
		Fixed operator -- (int);

		static Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(const Fixed &first, const Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(const Fixed &first, const Fixed &second);

		int getRawBits(void) const;
		void setRawBits(const int raw) const;

		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);