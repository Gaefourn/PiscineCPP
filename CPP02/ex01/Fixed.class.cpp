#include "Fixed.class.hpp"

Fixed::Fixed()
{
	_value = 0;
}

Fixed::Fixed(Fixed const& copie) : _value(copie._value)
{
}

Fixed::Fixed(const int value)
{
	_value = value << bits;
}


Fixed::Fixed(const float value)
{
	_value = roundf(value * ( 1 << bits));
}

int Fixed::toInt(void)const
{
	return ((int)(_value >> bits));
}

float Fixed::toFloat(void)const
{
	return ((float)_value / (1 << bits));
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	setRawBits(copie.getRawBits());
	return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
	out << obj.toFloat();
	return out;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::getRawBits(void) const
{
	return _value;
}

Fixed::~Fixed()
{
}