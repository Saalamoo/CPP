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
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif