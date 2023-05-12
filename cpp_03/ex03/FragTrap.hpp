#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap:public ClapTrap{
private:
    std::string Name;
    int Hit_Points;
    int Energy_Points;
    int Attack_Damage;
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap& fragtrap);
    FragTrap& operator = (FragTrap& flaptrap);

    void highFivesGuys();
};

#endif