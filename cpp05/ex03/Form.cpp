#include "Form.hpp"

Form::Form(void) : signGrade(0), signExecute(0)
{
}

Form::Form(std::string name, int sign, int ex) : name(name), signGrade(sign), signExecute(ex)
{
    if (sign < 1 || ex < 1)
        throw(Form::GradeTooHighException());
    if (sign > 150 || ex > 150)
        throw (Form::GradeTooLowException());
    is_sign = false;
    std::cout << "Form Constructor Called" << std::endl;
}
Form::Form(const Form &src): name(src.getName()), signGrade(src.getsignGrade()), signExecute(src.getsignExecute())
{
    std::cout << "Form Copy Called" << std::endl;
    *this = src;
}
Form & Form::operator=(Form const &rhs)
{
    if (this != &rhs)
    {
        is_sign = rhs.getIsSign();
    }
    return (*this);
}
std::string const Form::getName() const
{
    return (name);
}
int Form::getsignGrade() const
{
    return (signGrade);
}
int Form::getsignExecute() const
{
    return (signExecute);
}
void Form::beSigned(Bureaucrat const &br)
{
    if (br.getGrade() > signGrade)
        throw (Form::GradeTooLowException());
    else
        is_sign = 1;
}
bool Form::getIsSign() const
{
    return (is_sign);
}
Form::~Form(void)
{
    std::cout << "Form Destructor Called" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Form const &f)
{
    o << "------- The State of the Form  -------\n";
    o << "Name is : <" << f.getName() << ">\n";
    o << "Signed : <" << f.getIsSign() << ">\n";
    o << "Sign Grade : <" << f.getsignGrade() << ">\n";
    o << "Sign Execute : <" << f.getsignExecute() << ">\n";
    return (o);
}

void Form::execute(Bureaucrat const &executor) const
{
    if (!is_sign)
        throw (Form::GradeNotSigned());
    if (getsignExecute() < executor.getGrade())
        throw Bureaucrat::GradeTooLowException();
}
