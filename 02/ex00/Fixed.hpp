#pragma once

#include <iostream>

class Fixed {

    private:
    
        static const int    bits;
        int                 value;

    public:

        Fixed();
        ~Fixed();
        Fixed(const Fixed &other);
        Fixed &operator = (const Fixed &other);

        int getRawBits(void)const;
        void setRawBits(const int raw);
};
