#include "Fixed.hpp"

Fixed::Fixed()
{
    // std::cout << "Default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
    // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed:: operator = (Fixed const &fixed)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        this->nb = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    return this->nb;
}

void Fixed::setRawBits( int const raw )
{
    this->nb = raw;
}

Fixed::Fixed(int nb)
{
    // std::cout << "Int constructor called" << std::endl;
    this->nb = nb * (2 << this->bits);
}

Fixed::Fixed(float nb)
{
    // std::cout << "Float constructor called" << std::endl;
    this->nb = roundf(nb * (2 << this->bits));
}

float Fixed::toFloat( void ) const
{
    return (float) this->getRawBits() / (2 << this->bits);
}

int Fixed::toInt( void ) const
{
    return (int) this->getRawBits() / (2 << this->bits);
}

std::ostream& operator<<(std::ostream &out, const Fixed  &fixed)
{
    out << fixed.toFloat();
    return out;
}

bool operator < (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() < arg2.getRawBits();
}
bool operator > (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() > arg2.getRawBits();
}
bool operator <= (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() <= arg2.getRawBits();
}
bool operator >= (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() >= arg2.getRawBits();
}


bool operator != (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() != arg2.getRawBits();
}
bool operator == (Fixed const &arg1,Fixed const &arg2)
{
    return arg1.getRawBits() == arg2.getRawBits();
}

float operator + (Fixed const &arg1,Fixed const &arg2)
{
    return (arg1.toFloat() + arg2.toFloat());
}
float operator - (Fixed const &arg1,Fixed const &arg2)
{
    return (arg1.toFloat() - arg2.toFloat());
}
float operator * (Fixed const &arg1,Fixed const &arg2)
{
    return (arg1.toFloat() * arg2.toFloat());
}
float operator / (Fixed const &arg1,Fixed const &arg2)
{
    return (arg1.toFloat() / arg2.toFloat());
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    return (b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    return (b);
}

Fixed& Fixed::operator ++()
{
    this->setRawBits(this->getRawBits() + (1 << this->bits));
    return *this;
}