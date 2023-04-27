#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact{
private:
    std::string First_name; 
    std::string Last_name; 
    std::string Nick_name; 
    std::string Phone_number; 
    std::string Darkest_secret;
public:
    Contact();
    Contact(std::string first_name, std::string last_name, std::string nick_name, std::string phone_number,std::string darkest_secret);
    ~Contact();
    std::string GetFirstName();
    std::string GetLastName();
    std::string GetNickName();
    std::string GetPhoneNumber();
    std::string GetDarkestSecret();
};

#endif