#include "ClapTrap.hpp"

int main()
{
	ClapTrap claptrap("R-29");

	claptrap.takeDamage(3);
	claptrap.takeDamage(3);
	claptrap.attack("enemy-1");
	claptrap.attack("enemy-2");
	claptrap.beRepaired(6);
	claptrap.attack("enemy-1");
	claptrap.attack("enemy-2");
	claptrap.takeDamage(3);
	claptrap.takeDamage(3);
	claptrap.attack("enemy-1");
	claptrap.attack("enemy-2");
	claptrap.beRepaired(6);
	claptrap.takeDamage(5);
	claptrap.attack("enemy-2");
	claptrap.beRepaired(5);
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	claptrap.takeDamage(5);
}