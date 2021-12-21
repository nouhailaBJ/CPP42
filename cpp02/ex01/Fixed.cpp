#include "Fixed.hpp"
#include <math.h>
Fixed::Fixed(void) : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
    return ;
}

// from Int to Fixed
Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    _value = value << _bits;
}

// from float to Fixed
Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    _value = roundf((float)value * (float)(1<<_bits));
}

Fixed::Fixed(Fixed const &rhs)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = rhs;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_value = rhs._value;
    return (*this);
}

Fixed::~Fixed(void)
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_value);
}

void Fixed::setRawBits( int const raw )
{
    _value = raw;
}

// from fixed to float
float Fixed::toFloat( void ) const
{
    return ((float)_value / (float)(1<<_bits));
}

// from fixed to Int
int Fixed::toInt( void ) const
{
    return (_value>>_bits);
}

std::ostream & operator<<(std::ostream &o, Fixed const &f)
{
    o << f.toFloat();
    return (o);
}