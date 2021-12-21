#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen karen;
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    if (argc != 2)   
        return (0);
    while (i < 4)
    {
        if (argv[1] == levels[i])
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            karen.complain("DEBUG");
            break;
        case 1:
            karen.complain("INFO");
            break;
        case 2:
            karen.complain("WARNING");
            break;
        case 3:
            karen.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]\n";
            break;
    }
    return (0);
}