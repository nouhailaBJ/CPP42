#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
    if (grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    this->grade = grade;
    std::cout << "Bureaucrat Constructor Called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat Destructor Called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src)
{
    if (src.grade < 1)
        throw (Bureaucrat::GradeTooHighException());
    if (src.grade > 150)
        throw (Bureaucrat::GradeTooLowException());
    *this = src;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &rhs)
{
    if (this != &rhs)
    {
        if (rhs.grade < 1)
            throw (Bureaucrat::GradeTooHighException());
        if (rhs.grade > 150)
            throw (Bureaucrat::GradeTooLowException());
        grade = rhs.getGrade();
    }
    return (*this);
}

void Bureaucrat::IncrementGrade()
{
    if (grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    else
    {
        std::cout << "Incrementing Grade" << std::endl;
        grade--;
    }
}
void Bureaucrat::DecrementGrade()
{
    if (grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    else
    {
        std::cout << "Decrementing Grade" << std::endl;
        grade++;
    }
}
std::string const Bureaucrat::getName(void) const
{
    return (name);
}
int Bureaucrat::getGrade(void) const
{
    return (grade);
}

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i )
{
    std::cout << "<" << i.getName() << ">, bureaucrat grade <" << i.getGrade() << ">\n";
    return (o);
}

void Bureaucrat::signForm(Form const &form) const
{
    if (form.getIsSign())
        std::cout << "<" << name << "> signs <" << form.getName() << ">\n";
    else
        std::cout << "<" << name << "> cannot sign <" << form.getName() << "> because <grade is low>\n";
}