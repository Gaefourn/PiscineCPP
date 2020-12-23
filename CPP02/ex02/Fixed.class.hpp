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
	
	Fixed &operator=(const Fixed &copie);
	Fixed &operator++(void);
	Fixed &operator--(void);
	Fixed operator++(int);
	Fixed operator--(int);
	Fixed operator*(const Fixed &copie) const;
	Fixed operator+(const Fixed &copie) const;
	Fixed operator-(const Fixed &copie) const;
	Fixed operator/(const Fixed &copie) const;
	bool operator>(const Fixed &copie) const;
	bool operator>=(const Fixed &copie) const;
	bool operator<(const Fixed &copie) const;
	bool operator<=(const Fixed &copie) const;
	bool operator==(const Fixed &copie) const;
	bool operator!=(const Fixed &copie) const;
	static Fixed &min(Fixed &a, Fixed &b);
	const static Fixed &min(const Fixed &a, const Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
	const static Fixed &max(const Fixed &a, const Fixed &b);
	
	int toInt(void)const;
	float toFloat(void)const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	~Fixed();
};

std::ostream &operator<< (std::ostream &out, const Fixed &obj);

#endif