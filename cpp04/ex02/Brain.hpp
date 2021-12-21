#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
#include "Animal.hpp"

class Brain
{
    private:
        std::string ideas[100];
	public:
		Brain();
		Brain( Brain const & src );
		~Brain();
		Brain & operator=( Brain const & rhs );
		std::string getIdea(int index) const;
		void setIdeas(std::string idea);
};
#endif /* ********************************************************** ANIMAL_H */