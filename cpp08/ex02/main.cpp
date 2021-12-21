#include "mutantstack.hpp"
#include <list>


int main()
{
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    // last element
    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);


    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    /********* New Test ********/
    std::cout << "/********* New Test ********/" << std::endl;
    std::list<int> ls;

    for (int i = 0; i < 10; i++)
    {
        ls.push_back(i+ 1);
    }
    std::list<int>::iterator l_it;
    for (l_it = ls.begin(); l_it != ls.end(); l_it++)
    {
        mstack.push(*l_it);
    }
    for (it = mstack.begin(); it != mstack.end(); it++)
    {
        std::cout << *it << std::endl;
    }
    return 0;
}
