#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
private:
    int nb;
    const static int bits = 8;
public:
    Fixed();
    Fixed(Fixed &fixed);
    Fixed& operator = (Fixed &fixed);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};

#endif