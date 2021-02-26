#include "whatever.hpp"

int	main()
{
	{
		int a = 2;
		int b = 3;
		::swap( a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}

	{
		int a = 4;
		int b = 6;
		
		std::cout << "Max of " << a << " and " << b << " is ";
		std::cout << max<int>(a, b) << std::endl;
	
		std::cout << "Min of " << a << " and " << b << " is ";
		std::cout << min<int>(a, b) << std::endl;
		
		std::cout << "A is " << a << " and  B is " << b;
		 swap(a, b);
		std::cout << "\nAfter swap\n";
		std::cout << "A is " << a << " and  B is " << b << std::endl;
		
		std::string str1 = "Bonjour !";
		std::string str2 = "Ca va ?";
		
		std::cout << "string 1 is " << str1 << " and string2 is " << str2;
		swap(str1, str2);
		std::cout << "\nAfter swap\n";
		std::cout << "string 1 is " << str1 << " and string2 is " << str2 << std::endl;
	}
	
	{
		 A e(42);
 		 A f(21);
		  ::swap(e, f);
 		 std::cout << "e = " << e.getN() << ", f = " << f.getN() << std::endl;
 		 std::cout << "min(e, f) = " << ::min(e, f).getN() << std::endl;
 		 std::cout << "max(e, f) = " << ::max(e, f).getN() << std::endl;

	}
			
	return 0;
}