#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	try {
		Intern someRandomIntern;
		Form* rrf;
		Bureaucrat br("Nouhaila", 34);
		// rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		// rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		rrf->beSigned( br );
		br.executeForm( *rrf );
	}
	catch ( std::exception &e ) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}