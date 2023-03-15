#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
    protected:
		std::string m_name;
		int m_hp;
		int m_mana;
		int m_ad;
	public:
		ClapTrap();
		ClapTrap(std::string name, int hp , int ad, int mana);
		~ClapTrap();
		//Claptrap(const ClapTrap&); copyleri tan�mlamadan denem bakal�m olacaklar m�?
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		//ClapTrap& operator=(const ClapTrap&); copyleri tan�mlamadan denem bakal�m olacaklar m�?
};

#endif