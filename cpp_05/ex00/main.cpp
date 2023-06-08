#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat one;
		Bureaucrat two("two", 1);
		Bureaucrat three("three", 150);
		// Bureaucrat four("four", 0);


		std::cout << one << std::endl;
		std::cout << two << std::endl;
		std::cout << three << std::endl;

		try {
			std::cout << std::endl;
			std::cout << one << std::endl;
			one.incrementGrade();
			std::cout << one << std::endl;

			std::cout << std::endl;
			std::cout << one << std::endl;
			one.decrementGrade();
			std::cout << one << std::endl;

			std::cout << std::endl;
			std::cout << two << std::endl;
			two.incrementGrade();
			std::cout << two << std::endl;
		
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
