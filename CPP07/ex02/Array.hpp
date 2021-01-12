#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>

class Array
{
private:
	T *_array;
	unsigned int _size;
public:
	Array() : _size(0), _array(new T[0]) {};
	Array(unsigned int n) : _size(n), _array(new T[n]()) {};
	Array(const Array & copy)  : _size(0), _array(nullptr){
		*this = copy;
	};
	const Array &operator=(const Array &copy){
		delete [] _array;
		_size = copy.size();
		_array = new T[copy.size()];
		for (unsigned int i = 0; i < _size; i++)
			_array[i] = copy._array[i];
		return *this;	
	}
	unsigned int size(void)  const {
		return _size;
	};
	~Array(){
		if (_array)
			delete [] _array;
	};
	T &operator[](int i) const
	{
		if (! _array || i < 0 || (unsigned int)i >= _size)
			throw std::exception();
		else
			return _array[i];
	};
};
#endif