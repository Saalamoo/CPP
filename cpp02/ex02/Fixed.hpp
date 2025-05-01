#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
        int fixed_point;
        static const int fractional_bits = 8;
public:
        Fixed(); //constructor
        Fixed( const int num ); //constructor that takes constant integer
        Fixed( const float num );  //constructor that takes constant floating point number
        Fixed( const Fixed &fixed ); //copy constructor
        Fixed& operator=( const Fixed &fixed ); //copy assignment operator overload
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        //comparison operators
        bool operator<(const Fixed &fixed) const;
        bool operator>(const Fixed &fixed) const;
        bool operator<=(const Fixed &fixed) const;
        bool operator>=(const Fixed &fixed) const;
        bool operator==(const Fixed &fixed) const;
        bool operator!=(const Fixed &fixed) const;
        
        //arithmetic operators
        Fixed operator+(const Fixed &fixed);
        Fixed operator-(const Fixed &fixed);
        Fixed operator/(const Fixed &fixed);
        Fixed operator*(const Fixed &fixed);
        
        //increment/decrement
        Fixed& operator++();
        Fixed operator++(int);
        Fixed& operator--();
        Fixed operator--(int); 

        static Fixed& min(Fixed& lhs, Fixed& rhs); //static member function min
        static const Fixed& min(const Fixed& lhs, const Fixed& rhs); //static member function min const
        static Fixed& max(Fixed& lhs, Fixed& rhs); //static member function max
        static const Fixed& max(const Fixed& lhs, const Fixed& rhs); //static member function max const
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif