#include "mutantstack.hpp"
int main()
{
	mutantstack<int>    mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	mutantstack<int>::iterator it = mstack.begin();
	mutantstack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while(it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}

	mutantstack<int> s(mstack);
	
	std::cout << "\nSize before pop : " << s.size() << std::endl;
	
	while (!s.empty())
		s.pop();
		
	std::cout << "\nSize after pop : " << s.size() << std::endl;
	
	for (int i = 0; i < 6; i++)
		s.push(i);
		
	it = s.begin();
	
	while (it != s.end())
		std::cout << *(it++) << "\n";
		
	std::cout << std::endl;

	return 0;
}