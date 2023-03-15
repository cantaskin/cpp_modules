#include <iostream>

class ClapTrap{
		std::string m_name;
		int m_hp;
		int m_mana;
		int m_ad;
	public:
		ClapTrap()
		{
		    
		}
		ClapTrap(std::string name, int hp , int ad, int mana):m_name(name), m_hp(hp), m_ad(ad), m_mana(mana)
        {
	       std::cout << m_name << " is created with hp: " << m_hp << " ad: " << m_ad << " mana: " << m_mana << '\n';
        }
		~ClapTrap() {
			std::cout << m_name << " is dead." << '\n';
		}
		//Claptrap(const ClapTrap&); copyleri tan�mlamadan denem bakal�m olacaklar m�?
		void attack(const std::string& target)
		{
			if (!m_mana || !m_hp)
			{
				std::cout << m_name << " doesn't have mana or health point " << '\n';
				return;
			}
				std::cout << m_name << " attacked " << m_ad << " points to " << target << '\n';
		}

		void takeDamage(unsigned int amount)
		{
			if (!m_hp)
			{
				std::cout << m_name << " doesn't have health point" << '\n';
				return;
			}
				std::cout << m_name << " took " << amount << " damage" << '\n';
				m_hp -= amount;
				m_mana--;
			}

		void beRepaired(unsigned int amount)
		{
			if (!m_mana || !m_hp)
		{
			std::cout << m_name << " doesn't have mana or health point " << '\n';
			return;
		}
			std::cout << m_name << " healed " << amount << " point" << '\n';
			m_hp += amount;
		}
		//ClapTrap& operator=(const ClapTrap&); copyleri tan�mlamadan denem bakal�m olacaklar m�?
};

int main()
{
	ClapTrap	Lol("bacı", 10, 1, 10);
	Lol.attack("savar");
	Lol.takeDamage(5);
	Lol.beRepaired(7);
}
