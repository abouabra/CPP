#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->nb = 0;
}

Fixed::Fixed(Fixed const &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}
Fixed& Fixed:: operator = (Fixed const &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        this->nb = fixed.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
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
    std::cout << "Int constructor called" << std::endl;
    this->nb = nb * (2 << this->bits);
}

Fixed::Fixed(float nb)
{
    std::cout << "Float constructor called" << std::endl;
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