#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main()
{
	ClapTrap baanni;
	ScavTrap ayman("Ayman");
	FragTrap taib("Taib");

	std::cout << "Hp: " << ayman.getHP() << " Ep: " << ayman.getEP() << " Ad: " << ayman.getAD() << " Name: " << ayman.getName() << std::endl;
	std::cout << "Hp: " << baanni.getHP() << " Ep: " << baanni.getEP() << " Ad: " << baanni.getAD() << " Name: " << baanni.getName() << std::endl;
	std::cout << "Hp: " << taib.getHP() << " Ep: " << taib.getEP() << " Ad: " << taib.getAD() << " Name: " << taib.getName() << std::endl;
	
	baanni.attack("Ayman");
	ayman.guardGate();
	taib.highFivesGuys();
	return 0;
}