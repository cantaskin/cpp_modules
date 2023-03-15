#include "ScavTrap.h"
#include "FragTrap.h"

int	main()
{
	ScavTrap	a;
	FragTrap	b;
	a.takeDamage(90);
	a.beRepaired(40);
	a.attack("khalessi");
	a.guardGate();
	a.takeDamage(30);
    b.takeDamage(10);
    b.beRepaired(3);
    b.attack("kütahya porselen");
    b.highFivesGuys();
}