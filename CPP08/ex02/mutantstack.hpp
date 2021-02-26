#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>

class mutantstack : public std::stack<T>
{
public:
	mutantstack() : std::stack<T>() {};
	mutantstack(const mutantstack &copy) : std::stack<T>(copy) {};
	mutantstack &operator=(const mutantstack &copy) {return std::stack<T>::operator=(copy);};
	virtual ~mutantstack() {};
	
	typedef typename std::stack<T>::container_type::iterator iterator;
	
	iterator begin() {return std::stack<T>::c.begin();};
	iterator end() {return std::stack<T>::c.end();};
};

#endif