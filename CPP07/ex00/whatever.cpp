#include <iostream>

template < typename T >

T max(T const & x, T const & y)
{
	return (x > y ? x : y);
}

template < typename T >

T min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template < typename T >

void swap (T & x, T & y)
{
	T tmp;
	
	tmp = x;
	x = y;
	y = tmp;
}

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
		int c = b;
		
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
			
	return 0;
}