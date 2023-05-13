#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap:public virtual ClapTrap{
public:
    FragTrap();
    ~FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap& fragtrap);
    FragTrap& operator = (FragTrap& flaptrap);

    void highFivesGuys();

    int getHP();
    int getEP();
    int getAD();
    std::string getName();
};

#endif