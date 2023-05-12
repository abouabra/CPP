#ifndef SCAVETRAP_HPP
#define SCAVETRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap:public ClapTrap{
private:
    std::string Name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& Scavtrap);
    ScavTrap& operator = (ScavTrap& claptrap);

    void guardGate();
};

#endif