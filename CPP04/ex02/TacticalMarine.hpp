#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"
#include <string>
#include <iostream>

class TacticalMarine : public ISpaceMarine
{
private:
public:
	TacticalMarine(void);
	TacticalMarine(const TacticalMarine &copy);
	TacticalMarine &operator=(const TacticalMarine &copy);
	
	virtual ISpaceMarine* clone() const;
	virtual void battleCry() const;
	virtual void rangedAttack() const;
	virtual void meleeAttack() const;
	
	~TacticalMarine();
};

#endif