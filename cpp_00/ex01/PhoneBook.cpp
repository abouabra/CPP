#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <ostream>
#include <string>

PhoneBook::PhoneBook()
{
	return;
}

PhoneBook::~PhoneBook()
{
	return;
}
std::string  PhoneBook::set_string(std::string text)
{
	if(text.length() == 10)
		return text;
	if(text.length() > 10)
			text = text.substr(0,9).append(".");
	else if(text.length() < 10)
	{
		while(text.length() < 10)
			text = text.append(" ");
	}
	return text;
}

void  PhoneBook::add()
{
	std::string line;
	Contact new_contact;
	std::string data[5];
	int i = 0;
	static int index;

	while(i < 5)
	{
		if(i == 0)
			std::cout << "Enter First Name: ";
		else if(i == 1)
			std::cout << "Enter Last Name: ";
		else if(i == 2)
			std::cout << "Enter Nick Name: ";
		else if(i == 3)
			std::cout << "Enter Phone Number: ";
		else if(i == 4)
			std::cout << "Enter Darkest Secrest: ";
		std::getline(std::cin,line);
		if(line.length() > 0)
		{
			data[i] = line;
			i++;
		}
	}
	i = index % 8;
	new_contact = Contact(set_string(data[0]), set_string(data[1]),set_string(data[2]),set_string(data[3]),set_string(data[4]));
	contacts[i] = new_contact;
	index++;
	std::cout << "\tContact added successfully " << std::endl;
}

void PhoneBook::search()
{
	int index;
	std::string tmp;
	std::cout << "=============================================" << std::endl;
	std::cout << "|  INDEX   |First Name| LAST NAME| NICK NAME|"  << std::endl;
	int i = -1;
	while(++i < 8)
	{
		if(contacts[i].GetFirstName().length() <= 0)
			break;
		std::cout << "|==========|==========|==========|==========|" << std::endl;
		std::cout << "|";
		std::cout << i << "         " ;
		std::cout << "|";
		std::cout << contacts[i].GetFirstName();
		std::cout << "|";
		std::cout << contacts[i].GetLastName() ;
		std::cout << "|";
		std::cout << contacts[i].GetNickName();
		std::cout << "|";
		std::cout << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	i = -1;
	while(++i < 8)
		if(contacts[i].GetFirstName().length() <= 0)
			break;
	while(1)
    {
        std::cout << "Enter index: ";
		std::getline(std::cin,tmp);
		try {
			index = std::stoi(tmp);
			if (index >= 0 && index < i) {
				break;
			}
		}
		catch (const std::invalid_argument& e) {}
    }
	std::cout << "===================================================================" << std::endl;
	std::cout << "|  INDEX   |First Name| LAST NAME| NICK NAME| PHONE NUM| DARKEST S|"  << std::endl;
	std::cout << "|==========|==========|==========|==========|==========|==========|" << std::endl;
	std::cout << "|";
	std::cout << index << "         " ;
	std::cout << "|";
	std::cout << contacts[index].GetFirstName();
	std::cout << "|";
	std::cout << contacts[index].GetLastName() ;
	std::cout << "|";
	std::cout << contacts[index].GetNickName() ;
	std::cout << "|";
	std::cout << contacts[index].GetPhoneNumber() ;
	std::cout << "|";
	std::cout << contacts[index].GetDarkestSecret() ;
	std::cout << "|";
	std::cout << std::endl;
	std::cout << "===================================================================" << std::endl;
}
