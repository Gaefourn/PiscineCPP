#ifndef DOG_HPP
#define DOG_HPP


#include "Victim.hpp"

class dog : public Victim
{
private:
	dog();
public:
	dog(std::string name);
	dog(const dog &copy);
	dog &operator=(const dog &copy);
	void getPolymorphed() const;
	virtual ~dog();
};

#endif