#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	Squad *s = new Squad;
  Squad *s_copy = new Squad;
  TacticalMarine *john = new TacticalMarine;
  AssaultTerminator *beb = new AssaultTerminator;

  s->push(john);
  s->push(beb);
  s->push(beb); //Should not add same object two times
  s->push(nullptr); //Should not add a null object

  *s_copy = *s; //Verifying if copy is deep by looking if memory address is the same
  std::cout << s << std::endl;
  std::cout << s_copy << std::endl;

  //Objects should be deleted two times, because deepcopies were made of squad objects, thus also deep copies of the marines they contain
  delete s;
  delete s_copy;
	
	return 0;
}