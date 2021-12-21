#include "span.hpp"
#include <iostream>

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(1);
		sp.addNumber(3);
		sp.addNumber(2);
		sp.addNumber(5);
		sp.addNumber(6);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		int n = 10000;
		Span sp = Span(n);

		std::vector<int> sp_v;

		std::vector<int>::iterator it;

		for (int i = 0; i < n; i++)
			sp_v.push_back(rand() % n + i);
		sp.addNumber(sp_v.begin(), sp_v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}