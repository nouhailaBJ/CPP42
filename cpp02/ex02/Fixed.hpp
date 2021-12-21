#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
class Fixed
{
    private:
        int _value;
        static const int _bits = 8;
    public:
        Fixed(void);
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &rhs);
        Fixed & operator=(Fixed const &rhs);
        ~Fixed(void);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(Fixed const & rhs);
        bool operator<(Fixed const & rhs);
        bool operator>=(Fixed const & rhs);
        bool operator<=(Fixed const & rhs);
        bool operator==(Fixed const & rhs);
        bool operator!=(Fixed const & rhs);
        Fixed & operator+(Fixed const & rhs);
        Fixed & operator-(Fixed const & rhs);
        Fixed & operator*(Fixed const & rhs);
        Fixed & operator/(Fixed const & rhs);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        static Fixed const & min(Fixed const &a, Fixed const &b);
        static Fixed & min(Fixed &a, Fixed &b);
        static Fixed const & max(Fixed const &a, Fixed const &b);
        static Fixed & max(Fixed &a, Fixed &b);
};
std::ostream & operator<<(std::ostream &o, Fixed const &f);
#endif