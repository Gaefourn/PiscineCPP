#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type)
{
	_hp = hp;
	_type = type;
}

Enemy::Enemy(const Enemy &copy)
{
	*this = copy;
}

Enemy &Enemy::operator=(const Enemy &copy)
{
	_hp = copy.getHP();
	_type = copy.getType();
	return *this;
}

std::string Enemy::getType(void) const
{
	return _type;
}

int Enemy::getHP() const
{
	return _hp;
}

void Enemy::takeDamage(int amount)
{
	_hp -= amount;
	_hp = (_hp < 0 ? 0 : _hp);
	std::cout << _type << " took some damages and has now " << _hp << " HPs." << std::endl;
}

Enemy::~Enemy()
{}