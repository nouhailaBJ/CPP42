#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		~Bureaucrat();
		void IncrementGrade();
		void DecrementGrade();
		std::string const getName(void) const;
		int getGrade(void) const;
		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char * what() const throw(){
					return ("Grade Too high Exception");
				}
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade Too Low Exception");
				}
		};
};
std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif