#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

class RobotomyRequestForm : public Form
{
	private:
		std::string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		RobotomyRequestForm & operator=(RobotomyRequestForm const &rhs);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;
		std::string getTarget(void) const;
};
#endif