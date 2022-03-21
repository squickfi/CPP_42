#pragma once

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed {

    private:
    
        static const int    bits;
        int                 value;

    public:

        Fixed();
        Fixed(const int raw);
        Fixed(const float raw);
        ~Fixed();
        Fixed(const Fixed &other);

        Fixed &operator = (const Fixed &other);

        int getRawBits(void) const;
        void setRawBits(const int raw);

        float toFloat() const;
        int toInt() const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
