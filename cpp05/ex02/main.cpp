#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    std::cout << "-----Shrubbery Test-----" << std::endl;
    try
    {
        Bureaucrat bt("Bur_Nouha", 34);
        ShrubberyCreationForm scf("ewfwef");
        
        scf.beSigned(bt);
        std::cout << scf;
        bt.executeForm(scf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Shrubbery Test-----" << std::endl;
    std::cout << "-----  Robotomy Test   -----" << std::endl;
    try
    {
        Bureaucrat bt("Bur_Nouha", 1);
        RobotomyRequestForm scf("ewfwef");

        scf.beSigned(bt);
        std::cout << scf;
        bt.executeForm(scf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Robotomy Test -----" << std::endl;
    std::cout << "-----  Presidential Test   -----" << std::endl;
    try
    {
        Bureaucrat bt("Bur_Nouha", 2);
        // Bureaucrat bt("Bur_Nouha", 2);
        PresidentialPardonForm scf("ewfwef");

        scf.beSigned(bt);
        std::cout << scf;
        bt.executeForm(scf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "-----END Presidential Test -----" << std::endl;
    return (0);
}