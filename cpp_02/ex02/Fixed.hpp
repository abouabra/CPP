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
    Fixed& operator ++();
    Fixed& operator --();
    Fixed operator ++(int);
    Fixed operator --(int);
    ~Fixed();
    int getRawBits( void ) const;
    void setRawBits( int const raw );

    Fixed(int nb);
    Fixed(float nb);
    float toFloat( void ) const;
    int toInt( void ) const;
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

};

float operator + (Fixed const &arg1, Fixed const &arg2);
float operator - (Fixed const &arg1, Fixed const &arg2);
float operator * (Fixed const &arg1, Fixed const &arg2);
float operator / (Fixed const &arg1, Fixed const &arg2);

std::ostream& operator << (std::ostream &out,const Fixed &fixed);
bool operator < (Fixed const &arg1,Fixed const &arg2);
bool operator > (Fixed const &arg1,Fixed const &arg2);

bool operator <= (Fixed const &arg1,Fixed const &arg2);
bool operator >= (Fixed const &arg1,Fixed const &arg2);
bool operator != (Fixed const &arg1,Fixed const &arg2);
bool operator == (Fixed const &arg1,Fixed const &arg2);



#endif