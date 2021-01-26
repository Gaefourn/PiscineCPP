#ifndef SORCERER_HPP
#define SORCERER_HPP

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
private:
	std::string _name, _title;
	Sorcerer();
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &copie);
	
	Sorcerer &operator=(const Sorcerer &copie);
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const &) const;
	
	~Sorcerer();
};

std::ostream& operator << (std::ostream &stream, Sorcerer const &out);

#endif