#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"

int main()
{
	{
		Character* moi = new Character("Clev");
	
		std::cout << *moi;
		
		Enemy* b = new RadScorpion();
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
	
		moi->equip(pr);
		std::cout << *moi;
		moi->equip(pf);
		moi->attack(b);
		std::cout << *moi;
		moi->equip(pr);
		std::cout << *moi;
		moi->attack(b);
		std::cout << *moi;
		moi->attack(b);
		std::cout << *moi;

		delete moi;
		delete pf;
		delete pr;
	}	
	{
		Character* moi = new Character("Clev");
	
		std::cout << *moi;
		
		AWeapon* pr = new PlasmaRifle();
		AWeapon* pf = new PowerFist();
	
		Enemy *sm = new SuperMutant();
		
		moi->equip(pr);
		moi->attack(sm);
		std::cout << *moi;
		moi->attack(sm);
		std::cout << *moi;
		moi->attack(sm);
		moi->equip(pf);
		std::cout << *moi;
		moi->recoverAP();
		moi->recoverAP();
		moi->recoverAP();
		moi->recoverAP();
		moi->attack(sm);
		sm->getHP();
		moi->attack(sm);
		sm->getHP();
		

		delete sm;
		delete moi;
		delete pf;
		delete pr;

	}
	return 0;
}