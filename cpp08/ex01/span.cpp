#include "span.hpp"

Span::Span(unsigned int n): size(n), idx(0)
{
    N = new unsigned int[n];
}
Span::Span(Span const & src)
{
    *this = src;
}
Span & Span::operator=( Span const & rhs )
{
	if (this != &rhs)
	{
        if (N)
            delete [] N;
        this->size = rhs.size;
		this->N =  new unsigned int[size];
		this->idx = rhs.idx;
	}
	return *this;
}
Span::~Span()
{
    delete [] N;
}
void Span::addNumber(unsigned int n)
{
    if (idx < size)
    {
        N[idx] = n;
        idx++;
    }
    else
        throw FullnElementException();
}

unsigned int Span::shortestSpan()
{
    if (size == 0 || size == 1)
        throw (NotFoundEnoughSpan());
    std::sort(N, N + idx);
    unsigned int min = INT_MAX;
    for (int i = 0; i < idx - 1; i++)
    {
        if (N[i + 1] - N[i] < min)
            min = N[i + 1] - N[i];
    }
	return (min);
}

unsigned int Span::longestSpan()
{
    if (size == 0 || size == 1)
        throw (NotFoundEnoughSpan());
    std::sort(N, N + idx);
	return (N[idx - 1] - N[0]);
}
