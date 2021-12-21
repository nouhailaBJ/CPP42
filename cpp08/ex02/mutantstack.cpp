#include "mutantstack.hpp"

template<class T>
MutantStack<T>::MutantStack(MutantStack const & src)
{
    *this = src;
}

template<class T>
void MutantStack<T>::operator=(MutantStack const & rhs)
{
    (void)rhs;
}

