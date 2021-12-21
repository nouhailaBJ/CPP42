#include "Bureaucrat.hpp"


int main()
{
    try
    {
        std::cout << "Bureaucrat TEST 1" << std::endl;
        Bureaucrat br("Nouhaila", 3);
        br.IncrementGrade();
        std::cout << br;
        std::cout << "END Bureaucrat TEST 1" << std::endl;

        std::cout << "Bureaucrat TEST 2" << std::endl;
        Bureaucrat br2("Nouhaila", 150);
        br2.DecrementGrade();
        std::cout << br2;
        std::cout << "END Bureaucrat TEST 2" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}