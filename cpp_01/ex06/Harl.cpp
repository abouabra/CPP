#include "Harl.hpp"
#include <string>

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't putenough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming foryears whereas you started working here since last month." << std::endl << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain( std::string level )
{
    std::string lvls[4] = {"DEBUG","INFO","WARNING","ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};

    int filter_level = -1;
    while(++filter_level < 4)
        if(this->Level_filter == lvls[filter_level])
            break;
    int my_level = -1;
    while(++my_level < 4)
        if(level == lvls[my_level])
            break;

    if(my_level == 4)
        std::cout << "UNKOWN LEVEL" << std::endl;
    
    switch (my_level) {
        case 0:
            if(filter_level <= 0)
                (this->*ptr[0])();
            break;
        case 1:
            if(filter_level <= 1)
                (this->*ptr[1])();
            break;
        case 2:
            if(filter_level <= 2)
                (this->*ptr[2])();
            break;
        case 3:
            if(filter_level <= 3)
                (this->*ptr[3])();
            break;
    }
    // if(my_level < 4 && my_level >= filter_level)
    //     (this->*ptr[my_level])();
}

Harl::Harl(std::string level_filter)
{
    this->Level_filter = level_filter;
    return;
}

Harl::~Harl()
{
    return;
}