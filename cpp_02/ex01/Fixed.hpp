#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <ostream>
#include <cmath>

class Fixed{
private:
    int nb;
    const static int bits = 8;
public:
    Fixed();
    Fixed(Fixed const &fixed);
    Fixed& operator = (Fixed const &fixed);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed(int nb);
    Fixed(float nb);
    float toFloat( void ) const;
    int toInt( void ) const;


};

std::ostream& operator << (std::ostream &out,const Fixed &fixed);

#endif