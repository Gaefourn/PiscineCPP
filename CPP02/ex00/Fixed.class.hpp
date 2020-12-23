#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <iostream>

class Fixed
{
private:
	int _value;
	const static int bits = 8;
public:
	Fixed();
	Fixed(Fixed const& copie);
	Fixed &operator=(const Fixed& copie);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

#endif