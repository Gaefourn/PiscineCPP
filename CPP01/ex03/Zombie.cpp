#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
}

void	 Zombie::advert(void)
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> " << "Braiiiiiiinnnssss ..." << std::endl;
}