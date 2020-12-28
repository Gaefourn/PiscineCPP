#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"
#include <iostream>
#include <string>

class AssaultTerminator : public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	AssaultTerminator(const AssaultTerminator &copy);
	AssaultTerminator &operator =(const AssaultTerminator &copy);

	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	
	~AssaultTerminator();
};

#endif