#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
class Bureaucrat;
class Form 
{
	private:
		std::string const name;
		bool is_sign;
		int const signGrade;
		int const signExecute;
	public:
		Form(void);
		Form(std::string name, int sign, int ex);
		Form(const Form &src);
		Form &operator=(Form const &rhs);
		std::string const getName() const;
		int getsignGrade() const;
		int getsignExecute() const;
		void beSigned(Bureaucrat const &br);
		bool getIsSign() const;
		virtual ~Form(void);
		virtual void execute(Bureaucrat const &executor) const = 0;
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade Too High Exception");
				}
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade Too Low Exception");
				}
		};
		class GradeNotSigned : public std::exception
		{
			public :
				virtual const char* what() const throw()
				{
					return ("The form is not signed");
				}
		};
};
std::ostream &operator<<(std::ostream &o, Form const &f);

#endif