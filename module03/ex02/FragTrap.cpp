#include "FragTrap.h"
FragTrap::FragTrap(): ClapTrap("MOKAR",100,20,30)
{
    
}
void FragTrap::highFivesGuys()    
{
    std::cout << m_name << " high five " << '\n';
}