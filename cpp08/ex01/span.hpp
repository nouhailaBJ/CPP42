#ifndef SPAN_HPP
#define SPAN_HPP
# include <algorithm>
# include <iostream>
# include <array>
# include <list>
# include <vector>
# include <exception>

class Span
{
	private:
		unsigned int *N;
		int size;
		int idx;
	public:
		Span(){}
		Span(unsigned int n);
		Span(Span const & src);
		Span & operator=(Span const & rhs);
		~Span();
		void addNumber(unsigned int n);
		template<typename it>
		void addNumber(it begin, it end);
		unsigned int shortestSpan();
		unsigned int longestSpan();
		class FullnElementException: public std::exception{
			public:
				virtual const char * what() const throw()
				{
					return ("Full N element.");
				}
		};
		class NotFoundEnoughSpan: public std::exception{
			public:
				virtual const char * what() const throw()
				{
					return ("Not Found Enough Span.");
				}
		};
};
// make a addNumber(take two par it) this is better way
template <typename T>
void Span::addNumber(T begin, T end)
{
	T it;
    for (it = begin; it != end; it++)
    {
        addNumber(*it);
    }
}
#endif