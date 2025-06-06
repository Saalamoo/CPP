#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
        int fixed_point;
        static const int fractional_bits = 8;
public:
        Fixed(); //constructor
        Fixed( const Fixed &fixed ); //copy constructor
        Fixed& operator=( const Fixed &fixed ); //copy assignment operator overload
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif