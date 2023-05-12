#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	ClapTrap baanni;
	ScavTrap ayman("Ayman");

	std::cout << "Hp: " << ayman.getHP() << " Ep: " << ayman.getEP() << " Ad: " << ayman.getAD() << " Name: " << ayman.getName() << std::endl;
	std::cout << "Hp: " << baanni.getHP() << " Ep: " << baanni.getEP() << " Ad: " << baanni.getAD() << " Name: " << baanni.getName() << std::endl;
	baanni.attack("Ayman");
	ayman.guardGate();
	
	return 0;
}