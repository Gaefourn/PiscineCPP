#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <random>

class Zombie 
{
	private :
	
	std::string  _name, _type;

	public :
	
	Zombie (std::string name, std::string type);
	void			advert();
		
};

#endif