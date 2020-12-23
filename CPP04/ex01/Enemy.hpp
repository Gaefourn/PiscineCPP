#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <string>
#include <iostream>

class Enemy
{
protected:
	int _hp;
	std::string _type;
public:
	Enemy(int hp, std::string const &type);
	Enemy(const Enemy &copy);
	Enemy &operator=(const Enemy &copy);
	
	std::string getType(void) const;
	int getHP(void) const;
	virtual void takeDamage(int amount);
	
	virtual ~Enemy();
private:
	Enemy();
};

#endif