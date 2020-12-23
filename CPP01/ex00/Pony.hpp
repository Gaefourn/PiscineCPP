#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{

private:

std::string m_name;
int m_weight;
float m_size;
public:

Pony(std::string name, int weight, float size);
~Pony();

};

#endif