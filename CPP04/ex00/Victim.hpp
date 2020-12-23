#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
protected:
	std::string _name;
public:
	Victim(std::string name);
	Victim(const Victim &copy);
	
	Victim &operator=(const Victim &copy);
	std::string getName(void) const;
	virtual void getPolymorphed(void) const;
	
	~Victim();
};

std::ostream &operator <<(std::ostream &stream, Victim const &out);

#endif