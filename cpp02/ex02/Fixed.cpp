#include "Fixed.hpp"

Fixed::Fixed()
{
    fixed_point = 0;
}

Fixed::Fixed( const Fixed &fixed )
{
    *this = fixed;
}

Fixed& Fixed::operator=( const Fixed &fixed )
{
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
	this->fixed_point = (num << this->fractional_bits);
}

Fixed::Fixed(const float num)
{
	this->fixed_point = roundf((num * (float)(1<<this->fractional_bits)));
}

Fixed::~Fixed()
{
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

bool Fixed::operator!=(const Fixed& fixed) const
{
	return (this->getRawBits() !=  fixed.getRawBits());
}

bool Fixed::operator>(const Fixed& fixed) const
{
	return (this->getRawBits() >  fixed.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed) const
{
	return (this->getRawBits() <  fixed.getRawBits());
}

bool Fixed::operator==(const Fixed& fixed) const
{
	return (this->getRawBits() ==  fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed& fixed) const
{
	return (this->getRawBits() >=  fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed) const
{
	return (this->getRawBits() <=  fixed.getRawBits());
}

Fixed Fixed::operator+(const Fixed& fixed)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator-(const Fixed& fixed)
{
	Fixed temp;
	temp.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (temp);
}

Fixed Fixed::operator*(const Fixed& fixed)
{
	Fixed temp(this->toFloat() * fixed.toFloat());
	return (temp);
}

Fixed Fixed::operator/(const Fixed& fixed)
{
	Fixed temp(this->toFloat() / fixed.toFloat());
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->fixed_point--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;
	--(*this);
	return (temp);
}

Fixed& Fixed::operator++()
{
	this->fixed_point++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;
	++(*this);
	return (temp);
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs < rhs)
		return (lhs);
	return (rhs);
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs)
{
	if (lhs > rhs)
		return (lhs);
	return (rhs);
}
