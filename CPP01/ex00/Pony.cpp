#include "Pony.hpp"

Pony::Pony(std::string name, int weight, float size) : m_name(name), m_weight(weight), m_size(size)
{
	std::cout << "Pony name: " <<
	m_name << " , pony weight: " <<
	m_weight << " , pony size: " << m_size << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Destructeur bonjour !" << std::endl;
}