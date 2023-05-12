#include "ClapTrap.hpp"

int main( void ) {
	
	ClapTrap john("John Wick");
	ClapTrap ayman("Ayman");
	ClapTrap foreign;
	foreign = ayman;

	john.attack("Ayman");
	ayman.takeDamage(0);
	ayman.takeDamage(132);
	ayman.attack("Me");
	ayman.beRepaired(2);
	ayman.takeDamage(10);
	foreign.attack("John Doe");
	return 0;
}