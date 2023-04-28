#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{
private:
    std::string type;
public:
    Weapon(std::string Type);
    ~Weapon();
    const std::string  getType();
    void setType(std::string Type);
};
#endif