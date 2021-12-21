#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp" 
class HumanA
{
    private:
        Weapon &wp;
        std::string name;
    public:
        HumanA(std::string n_name, Weapon &w);
        ~HumanA();
        void attack(void);
};

#endif