#include "ScavTrap.h"

int	main()
{
	ScavTrap	a;
	ScavTrap	b(a);
	a.takeDamage(90);
	a.beRepaired(40);
	a.attack("khalessi");
	a.guardGate();
	a.takeDamage(30);
    b.takeDamage(10);
    b.beRepaired(3);
    b.attack("kütahya porselen");
    b.guardGate();
}