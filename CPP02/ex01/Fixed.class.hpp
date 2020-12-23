#ifndef FIXED_CLASS_HPP
#define FIXED_CLASS_HPP

#include <cmath>
#include <iostream>

class Fixed
{
private:
	int _value;
	const static int bits = 8;
public:
	Fixed();
	Fixed(Fixed const& copie);
	Fixed(const int value);
	Fixed(const float value);
	Fixed &operator=(const Fixed& copie);
	int toInt(void)const;
	float toFloat(void)const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

std::ostream &operator<< (std::ostream &out, const Fixed &obj);

#endif