#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <algorithm>
#include <iostream>
#include <stack>
template<class T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		MutantStack(MutantStack const & src);
		void operator=(MutantStack const & rhs);
		~MutantStack(){}

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator begin() {return (std::stack<T>::c.begin());}
		iterator end() {return (std::stack<T>::c.end());}
};

#endif