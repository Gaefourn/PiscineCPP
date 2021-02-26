#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template < typename T >

T max(T const  & x, T const & y)
{
	return (x > y ? x : y);
}

template < typename T >

T min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template < typename T >

void swap (T & x, T & y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

class A
{
	private:
		int _n;
	public:
		A(int n = 0) : _n(n)
		{};
		int getN(void) const
		{
			return (_n);
		};
		bool operator>(const A &other) const
		{
			return (_n > other._n);
		};
		bool operator<(const A &other) const
		{
			return (_n < other._n);
		};
};


#endif