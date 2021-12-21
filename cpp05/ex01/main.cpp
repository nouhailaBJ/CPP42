#include "Bureaucrat.hpp"
#include "Form.hpp"


int main()
{
    try
    {
        Bureaucrat br("br_nouha", 1);
        Form f1("form_nouha", 2, 20); // besigned if grade bur more than signGrade here show throw
        std::cout << br;

        std::cout << f1;
        f1.beSigned(br);
        std::cout << f1;

        Form f2("form_test2", 5 , 100);
        br.signForm(f2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}