#include "Character.hpp"
#include "AMateria.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* moi = new Character("moi");
	
	AMateria* tmp;
	tmp = src->createMateria("Ice");
	moi->equip(tmp);
	tmp = src->createMateria("Cure");
	moi->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);
	
	delete bob;
	delete moi;
	delete src;
	
	    Character ch("YO");

    std::cout << std::endl;

    {
        std::cout << "================== ICE          ==================" << std::endl;
        Ice i;
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        Ice i2(i);
        std::cout << "Type: " << i2.getType() << ", XP: " << i2.getXP() << std::endl;
        Ice i3;
        i3 = i2;
        std::cout << "Type: " << i2.getType() << ", XP: " << i2.getXP() << std::endl;
        AMateria *i4 = new Ice(i);
        std::cout << "Type: " << i4->getType() << ", XP: " << i4->getXP() << std::endl;

        std::cout << "################## NO ASSIGN TYPE" << std::endl;
        AMateria *c = new Cure();
        *c = i3;
        std::cout << "Type: " << c->getType() << ", XP: " << c->getXP() << std::endl;

        std::cout << "################## CLONE" << std::endl;
        AMateria *cl = i3.clone();
        std::cout << "Type: " << cl->getType() << ", XP: " << cl->getXP() << std::endl;

        std::cout << "################## USE" << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;
        i.use(ch);
        std::cout << "Type: " << i.getType() << ", XP: " << i.getXP() << std::endl;

        delete cl;
        delete c;
        delete i4;
    }
	
	return 0;
}