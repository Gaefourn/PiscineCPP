#ifndef HUMAN_HPP
#define HUMAN_HPP

#include "Brain.hpp"

class Human
{
private:

Brain _brain;

public:

Human();
Brain *identify(void);
Brain &getBrain(void);
~Human();


};

#endif