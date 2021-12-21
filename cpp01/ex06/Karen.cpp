#include "Karen.hpp"

Karen::Karen(void)
{
}

Karen::~Karen(void)
{
    
}

void Karen::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love to get extra bacon";
    std::cout << " for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra";
    std::cout << "bacon cost more money. You don’t put enough! If you did ";
    std::cout << "I would not have to ask for it!\n";
}

void Karen::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been ";
    std::cout << "coming here for years and you just started working here last month.\n";
}
void Karen::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}

int Karen::find_level(std::string &lvl)
{
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        if (lvl == levels[i])
            return i;
        i++;
    }
    return (-1);
}

 
void Karen::complain(std::string level)
{
    int g_level = find_level(level);
    void (Karen::*a[4])() = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    if (g_level >= 0 && g_level < 4)
        (this->*a[g_level])();
}