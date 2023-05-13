#ifndef SCAVETRAP_HPP
#define SCAVETRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap:public virtual ClapTrap{
public:
    ScavTrap();
    ~ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap& Scavtrap);
    ScavTrap& operator = (ScavTrap& scavtrap);

    void guardGate();

    int getHP();
    int getEP();
    int getAD();
    std::string getName();
};

#endif