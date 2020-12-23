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

Fixed Fixed::operator*(const Fixed &copie) const
{
	return toFloat() * copie.toFloat();
}

Fixed Fixed::operator+(const Fixed &copie) const
{
	return toFloat() + copie.toFloat();
}

Fixed Fixed::operator-(const Fixed &copie) const
{
	return toFloat() - copie.toFloat();
}

Fixed Fixed::operator/(const Fixed &copie) const
{
	return toFloat() / copie.toFloat();
}

Fixed &Fixed::operator++(void)
{
	_value += 1;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	_value -= 1;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}

bool Fixed::operator>(const Fixed &copie) const
{
	return _value > copie._value;
}

bool Fixed::operator>=(const Fixed &copie) const
{
	return _value >= copie._value;
}

bool Fixed::operator<(const Fixed &copie) const
{
	return _value < copie._value;
}

bool Fixed::operator<=(const Fixed &copie) const
{
	return _value <= copie._value;
}

bool Fixed::operator==(const Fixed &copie) const
{
	return _value == copie._value;
}

bool Fixed::operator!=(const Fixed &copie) const
{
	return _value != copie._value;
}


Fixed &Fixed::min(Fixed &a, Fixed &b)
{
	return a < b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
	return a > b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	return a < b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	return a > b ? a : b;
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