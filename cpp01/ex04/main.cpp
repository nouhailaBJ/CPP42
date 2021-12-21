#include "Replace.hpp"

int main(int ac, char **argv)
{
    Replace rp;

    if (ac == 4)
    {
        rp.set_variable(argv[1], argv[2], argv[3]);
        rp.ft_replace();
    }
    else
        std::cout << "Error: Invalid Arguments\n";
}