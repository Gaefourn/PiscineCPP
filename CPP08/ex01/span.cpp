#include "span.hpp"

span::span(unsigned int n) : _max(n)
{
	_storage.reserve(n);
}

span::span(const span &copy)
{
	*this = copy;
}

span &span::operator=(const span &copy)
{
	_storage = copy._storage;
	_max = copy._max;
	return *this;
}

span::~span()
{}

void span::addNumber(int n)
{
	if (_storage.size() < _max)
		_storage.push_back(n);
	else
		throw span::MaxLimitReached();
}

int span::shortestSpan(void)
{
	if (_max < 2)
		throw span::NotEnoughData();
	std::vector<int> copy = _storage;
	std::sort(copy.begin(), copy.end());
	std::vector<int>::iterator index = copy.begin();
	std::vector<int> ::iterator max = copy.begin();
	std::vector<int>::iterator min = copy.end();
	
	index++;
	min--;
	
	for (unsigned int i = 0; i < (_max - 1); i++)
	{
		if (abs(*max - *index) < abs(*max - *min))
			min = index;
		else if (abs(*min - *index) < abs(*max - *min))
			max = index;
		index++;
	}

	return (abs(*max - *min));
}

int span::longestSpan()
{
	if (_max < 2)
		throw span::NotEnoughData();

	std::vector<int> max = _storage;
	
	return (*std::max_element(max.begin(), max.end()) - *std::min_element(max.begin(), max.end()));
}

span::MaxLimitReached::MaxLimitReached()
{}

span::MaxLimitReached::MaxLimitReached(const MaxLimitReached &copy)
{
	*this = copy;
}

span::MaxLimitReached &span::MaxLimitReached::operator=(const MaxLimitReached &copy)
{
	(void)copy;
	return *this;
}

const char* span::MaxLimitReached::what() const throw()
{
	return "Error: Max limit reached.";
}

span::MaxLimitReached::~MaxLimitReached()
{}

span::NotEnoughData::NotEnoughData()
{}

span::NotEnoughData::NotEnoughData(const NotEnoughData &copy)
{
	*this = copy;
}

span::NotEnoughData &span::NotEnoughData::operator=(const NotEnoughData & copy)
{
	(void)copy;
	return *this;
}

const char* span::NotEnoughData::what() const throw()
{
	return "Error: Not enough data.";
}

span::NotEnoughData::~NotEnoughData()
{}