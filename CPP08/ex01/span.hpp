#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <climits>
#include <string>
#include <algorithm>
#include <list>
#include <exception>

class span
{
public:
	span(unsigned int n);
	span(const span &copy);
	span &operator=(const span &copy);
	~span();
	
	void addNumber(int n);
	int shortestSpan();
	int longestSpan();
	
	class MaxLimitReached : public std::exception
	{
		public:
			MaxLimitReached();
			MaxLimitReached(const MaxLimitReached &copy);
			MaxLimitReached &operator=(const MaxLimitReached &copy);
			~MaxLimitReached();
			virtual const char* what() const throw();
	};
	
	class NotEnoughData : public std::exception
	{
		public:
			NotEnoughData();
			NotEnoughData(const NotEnoughData &copy);
			NotEnoughData &operator=(const NotEnoughData &copy);
			~NotEnoughData();
			virtual const char* what() const throw();
	};
private:
	unsigned int _max;
	std::vector<int> _storage;	
	span();
};

#endif