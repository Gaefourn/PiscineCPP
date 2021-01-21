#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << _Name << " : Bonjour, je suis un super trap !" << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy), NinjaTrap(copy), FragTrap(copy)
{
	*this = copy;
	std::cout << _Name << " : Bonjour, je suis un super trap !" << std::endl;
}

SuperTrap &SuperTrap::operator=(const SuperTrap &copy)
{
	(void)copy;
	std::cout << _Name << " : Bonjour, je suis un super trap !" << std::endl;
	return *this;
}

SuperTrap::~SuperTrap()
{
	std::cout << _Name << " : Super disparition !" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}