#include "Zombie.hpp"

int main(void)
{
    Zombie *pZmb = newZombie("heap");
    pZmb->announce();
    delete pZmb;
    randomChump("stack");
    return 0;
}