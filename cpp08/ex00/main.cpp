#include "easyfind.hpp"
#include <list>
int main()
{
    try
    {
        std::list<int> lst;

        for (int i = 0; i < 10; i++)
            lst.push_back(i + 1);
        easyfind(lst, 5);
       // easyfind(lst, 10);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}