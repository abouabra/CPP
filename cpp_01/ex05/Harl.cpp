#include "Harl.hpp"
#include <string>

void Harl::debug()
{
    std::cout << "[DEBUG]" << std::endl;
}

void Harl::info()
{
    std::cout << "[INFO]" << std::endl;
}

void Harl::warning()
{
    std::cout << "[WARNING]" << std::endl;
}

void Harl::error()
{
    std::cout << "[Error]" << std::endl;
}

void Harl::complain( std::string level )
{
    std::string lvls[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
    int i = -1;
    while(++i < 4)
    {
        if(level == lvls[i])
        {
            (this->*ptr[i])();
            break;
        }
    }
    if(i == 4)
    {
       std::cout << "[NONE]" << std::endl;
    }
}

Harl::Harl()
{
    return;
}

Harl::~Harl()
{
    return;
}