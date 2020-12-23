#include "Fixed.class.hpp"

Fixed::Fixed()
{
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& copie) : _value(copie._value)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &copie)
{
	setRawBits(copie.getRawBits());
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return _value;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}