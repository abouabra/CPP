#include "Harl.hpp"

int main(int ac, char **av)
{
	if(ac != 2)
	{
		std::cout << "Usage: ./harlFilter LEVEL" << std::endl;
		return 0;
	}
    Harl harl = Harl(av[1]);
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("AK-47");
    return 0;
}