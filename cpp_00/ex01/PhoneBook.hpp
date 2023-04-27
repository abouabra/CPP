#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
	private:
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		std::string set_string(std::string text);
		void add();
		void search();
};
#endif