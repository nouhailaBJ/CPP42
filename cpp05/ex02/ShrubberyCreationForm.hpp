#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class ShrubberyCreationForm : public Form
{
	private:
		std::string target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		ShrubberyCreationForm & operator=(ShrubberyCreationForm const &rhs);
		~ShrubberyCreationForm();

		void execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;

		class ProblemFileException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Can't Open the File");
				}	
		};
};
#endif