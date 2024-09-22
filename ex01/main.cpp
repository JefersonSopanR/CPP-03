#include "ScavTrap.hpp"

int main()
{
	ScavTrap scavtrap("R-29");

	scavtrap.takeDamage(3);
	scavtrap.takeDamage(3);
	scavtrap.attack("enemy-1");
	scavtrap.attack("enemy-2");
	scavtrap.beRepaired(6);
	scavtrap.attack("enemy-1");
	scavtrap.attack("enemy-2");
	scavtrap.takeDamage(3);
	scavtrap.takeDamage(3);
	scavtrap.attack("enemy-1");
	scavtrap.attack("enemy-2");
	std::cout << "enemy-1 is dead" <<std::endl;
	scavtrap.beRepaired(6);
	scavtrap.takeDamage(5);
	scavtrap.attack("enemy-2");
	std::cout << "enemy-2 is dead" <<std::endl;
	scavtrap.beRepaired(5);
	scavtrap.guardGate();
}