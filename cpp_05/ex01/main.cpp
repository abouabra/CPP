#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try {
		Bureaucrat ayman("Ayman", 2);
		Form Form("Ta9a3od", 5, 1);

		std::cout << ayman << std::endl;
		std::cout << Form << std::endl;

		try {
			Form.beSigned(ayman);
			std::cout << Form << std::endl;
			Form.signForm(ayman);
			std::cout << Form << std::endl;
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
    return 0;
}
