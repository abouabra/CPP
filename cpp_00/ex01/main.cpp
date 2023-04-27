#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	PhoneBook phonebook;
	while(1)
	{
		std::cout << "Enter Command: ";
		std::getline(std::cin,cmd);
		if(cmd == "ADD")
			phonebook.add();
		else if(cmd == "SEARCH")
			phonebook.search();
		else if(cmd == "EXIT")
			exit(0);
	}
	return 0;
}