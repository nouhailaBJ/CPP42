#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
    public:
        HumanB(std::string n_name);
        HumanB(std::string n_name, Weapon *wp);
        ~HumanB(void);
        void attack(void);
        void setWeapon(Weapon &n_wp);
};
#endif