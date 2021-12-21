#include "Fixed.hpp"
#include <math.h>
Fixed::Fixed(void) : _value(0)
{
    return ;
}

// from Int to Fixed
Fixed::Fixed(int const value)
{
    _value = value << _bits;
}

// from float to Fixed
Fixed::Fixed(float const value)
{
    _value = roundf((float)value * (float)(1<<_bits));
}

Fixed::Fixed(Fixed const &rhs)
{
    *this = rhs;
}

Fixed & Fixed::operator=(Fixed const &rhs)
{
    this->_value = rhs._value;
    return (*this);
}

Fixed::~Fixed(void)
{
}

int Fixed::getRawBits( void ) const
{
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


bool Fixed::operator>(Fixed const & rhs)
{
    return (this->getRawBits() > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const & rhs)
{
    return (this->getRawBits() < rhs.getRawBits());
}
bool Fixed::operator>=(Fixed const & rhs)
{
    return (this->getRawBits() >= rhs.getRawBits());
}
bool Fixed::operator<=(Fixed const & rhs)
{
    return (this->getRawBits() <= rhs.getRawBits());
}
bool Fixed::operator==(Fixed const & rhs)
{
    return (this->getRawBits() == rhs.getRawBits());
}
bool Fixed::operator!=(Fixed const & rhs)
{
    return (this->getRawBits() != rhs.getRawBits());
}

Fixed & Fixed::operator+(Fixed const & rhs)
{
   this->_value = this->getRawBits() + rhs.getRawBits();
   return (*this);
}
Fixed & Fixed::operator-(Fixed const & rhs)
{
   this->_value = this->getRawBits() - rhs.getRawBits();
   return (*this);
}
Fixed & Fixed::operator*(Fixed const & rhs)
{
   this->_value = this->getRawBits() * rhs.getRawBits() / (1 << Fixed::_bits);
   return (*this);
}
Fixed & Fixed::operator/(Fixed const & rhs)
{
   this->_value = (this->getRawBits()  * (1 << Fixed::_bits)) / rhs.getRawBits();
   return (*this);
}

Fixed Fixed::operator++()
{
    this->_value++;
    return (*this);
}
Fixed Fixed::operator++(int)
{
	Fixed n_f(*this);
	operator++();
	return (n_f);
}

Fixed Fixed::operator--()
{
    this->_value--;
    return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed n_f(*this);
	operator--();
	return (n_f);
}

Fixed const & Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}
Fixed & Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}


Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}