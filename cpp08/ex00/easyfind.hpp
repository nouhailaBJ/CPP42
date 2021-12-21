#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <exception>
#include <iostream>
#include <algorithm>

class NotFoundException: public std::exception
{
    public:
        virtual const char *what() const throw()
        {
            return ("We don't found the element");
        }
};

template <typename T>
void easyfind(T cnt, int search)
{
    typename T :: iterator it;
    it = std::find(cnt.begin(), cnt.end(), search);
    if (*it != search)
        throw (NotFoundException());
    else
        std::cout << "its founded" << std::endl;
}

#endif