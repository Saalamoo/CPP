#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    fixed_point = 0;
}

Fixed::Fixed( const Fixed &fixed )
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed &fixed )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &fixed)
        this->fixed_point = fixed.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point = (num << this->fractional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixed_point = roundf((num * (float)(1<<this->fractional_bits)));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
   return(this->fixed_point);
}

void Fixed::setRawBits( int const raw )
{
    this->fixed_point = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->fixed_point / (float)(1<<this->fractional_bits));
}

int	Fixed::toInt(void) const
{
	return (this->fixed_point >> this->fractional_bits);
}