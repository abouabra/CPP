#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap:public ScavTrap, public FragTrap{
private:
    std::string Name;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& diamondtrap);
    DiamondTrap& operator = (DiamondTrap& diamondtrap);

    void	attack( const std::string &target );
	void	whoAmI( void );
};

#endif