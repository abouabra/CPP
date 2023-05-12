#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap:public ScavTrap, public FragTrap{
private:
    std::string Name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;
public:
    DiamondTrap();
    ~DiamondTrap();
    DiamondTrap(std::string name);
    DiamondTrap(DiamondTrap& diamondtrap);
    DiamondTrap& operator = (DiamondTrap& diamondtrap);

};

#endif