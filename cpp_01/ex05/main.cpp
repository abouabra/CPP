#include "Harl.hpp"

int main(void)
{
    Harl harl;

	harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("WARNING");
	harl.complain("ERROR");

	harl.complain("AK-47");
    return 0;
}