#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string type;
	public:
		Weapon(void);
		Weapon(std::string str);
		~Weapon(void);
		const std::string& getType(void);
		void setType(std::string n_type);
};

#endif