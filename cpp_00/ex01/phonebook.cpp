#include <cstdlib>
#include <iostream>
#include <iterator>
#include <ostream>
#include <string>

class Contact{
	public:
		std::string first_name; 
		std::string last_name; 
		std::string nick_name; 
		std::string phone_number; 
		std::string darkest_secret;
};

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		std::string set_string(std::string text)
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
		void add()
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

			new_contact.first_name = set_string(data[0]);
			new_contact.last_name = set_string(data[1]);
			new_contact.nick_name = set_string(data[2]);
			new_contact.phone_number = set_string(data[3]);
			new_contact.darkest_secret = set_string(data[4]);
			contacts[i] = new_contact;
			index++;
			std::cout << "\tContact added successfully " << std::endl;
		}
		
		void search()
		{
			int index;
			std::cout << "=============================================" << std::endl;
			std::cout << "|  INDEX   |First Name| LAST NAME| NICK NAME|"  << std::endl;
			int i = -1;
			while(++i < 8)
			{
				if(contacts[i].first_name.length() <= 0)
					break;
				std::cout << "|==========|==========|==========|==========|" << std::endl;
				std::cout << "|";
				std::cout << i << "         " ;
				std::cout << "|";
				std::cout << contacts[i].first_name;
				std::cout << "|";
				std::cout << contacts[i].last_name ;
				std::cout << "|";
				std::cout << contacts[i].nick_name ;
				std::cout << "|";
				std::cout << std::endl;
			}
			std::cout << "=============================================" << std::endl;
			i = -1;
			while(++i < 8)
				if(contacts[i].first_name.length() <= 0)
					break;
			while(1)
			{
				std::cout << "Enter index: ";
				std::cin >> index;
				if(index >=0 && index < i)
					break;
			}
			std::cin.ignore();
			std::cout << "===================================================================" << std::endl;
			std::cout << "|  INDEX   |First Name| LAST NAME| NICK NAME| PHONE NUM| DARKEST S|"  << std::endl;
			std::cout << "|==========|==========|==========|==========|==========|==========|" << std::endl;
			std::cout << "|";
			std::cout << index << "         " ;
			std::cout << "|";
			std::cout << contacts[index].first_name;
			std::cout << "|";
			std::cout << contacts[index].last_name ;
			std::cout << "|";
			std::cout << contacts[index].nick_name ;
			std::cout << "|";
			std::cout << contacts[index].phone_number ;
			std::cout << "|";
			std::cout << contacts[index].darkest_secret ;
			std::cout << "|";
			std::cout << std::endl;
			std::cout << "===================================================================" << std::endl;
		}
};

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