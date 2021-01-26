#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(const Peon &copy);
	
	void getPolymorphed(void) const;
	Peon &operator =(const Peon &copy);
	
	virtual ~Peon();
};

#endif