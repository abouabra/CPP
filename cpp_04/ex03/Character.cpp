#include "Character.hpp"

Character::Character()
{
    this->name = "Default";
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
    }
}

Character::Character(const std::string& name)
{
    this->name = name;
    for (int i = 0; i < 4; i++)
    {
        inventory[i] = nullptr;
    }
}

Character::Character(const Character& character)
{
    this->name = character.name;
    for (int i = 0; i < 4; i++)
    {
        if (character.inventory[i])
            inventory[i] = character.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];
    }
}

Character& Character::operator=(const Character& character)
{
    if (this == &character)
        return *this;

    name = character.name;
    for (int i = 0; i < 4; i++)
    {
        delete inventory[i];

        if (character.inventory[i])
            inventory[i] = character.inventory[i]->clone();
        else
            inventory[i] = nullptr;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
    {
        inventory[idx]->use(target);
    }
}
