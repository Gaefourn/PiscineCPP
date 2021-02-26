#include "span.hpp"

int main()
{
	{
		span sp = span(5);
		
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	
	{
		span test(10);
		
		srand(time(0));
		int x;
		int y;
		for (int i = 0; i < 10; i++)
		{
			y = rand() % 10000;
			test.addNumber(y);
			std::cout << "[" <<  y << "]" <<std::endl;
			x = i;
		}
		std::cout << "Total insertions : " << x << std::endl;
		try
		{
			std::cout << "\n\nShortest span: " << test.shortestSpan() << std::endl;
			std::cout << "\n\nLongest span: " << test.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
		try
		{
			std::cout << "\n\nAdding numbers to show error" << std::endl;
			test.addNumber(10);
			test.addNumber(58694868);
		}
		catch(span::MaxLimitReached &e)
		{
			std::cerr << e.what() << '\n';
		}
		
		span small(1);
		
		try
		{
			std::cout << "Try longest span with 1 range" << std::endl;
			small.longestSpan();
		}
		catch(span::NotEnoughData & e)
		{
			std::cerr << e.what() << '\n';
		}
		
		
	}	
	return 0;
}