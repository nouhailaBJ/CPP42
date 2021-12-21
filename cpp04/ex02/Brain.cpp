#include "Brain.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Brain::Brain()
{
	std::cout << "Brain Constructor Called" << std::endl;
}

Brain::Brain( const Brain & src )
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Brain &				Brain::operator=( Brain const & rhs )
{
	std::cout << "Brain Assignation called" << std::endl;
	if ( this == &rhs )
	{
		for(int i = 0; i < 100; i++)
		{
			ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

/*
** --------------------------------- ACCESSOR ---------------------------------
*/
std::string Brain::getIdea(int i) const
{
	return  (ideas[i]);
}

void Brain::setIdeas(std::string idea)
{
	for(int i = 0; i < 100; i++)
	{
		ideas[i] = idea;
	}
}

/* ************************************************************************** */