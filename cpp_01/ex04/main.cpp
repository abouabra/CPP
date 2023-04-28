#include <iostream>
#include <fstream>
#include <regex>

int main(int ac, char **av)
{
    std::fstream file;
    std::fstream rep_file;
    std::string text;
    std::string tmp;

    if(ac != 4)
    {
        std::cout << "Usage: filename string_1 string_2" << std::endl;
        return 1;
    }
    
    tmp = av[1];
    tmp.append(".replace");
    file.open(av[1], std::ios::in);
    if(!file)
    {
        std::cout << "Error occurred" << std::endl;
        return 1;
    }
    rep_file.open(tmp,std::ios::out);
    if(!rep_file)
    {
        std::cout << "Error occurred" << std::endl;
        return 1;
    }
    while(getline(file,tmp))
    {
        text.append(tmp);
        if(file.eof())
            break;
        text.append("\n");
    }
    
    std::regex pattern(av[2]);
    text = std::regex_replace(text,pattern,av[3]);
    rep_file << text;

    rep_file.close();
    file.close();
    return 0;
}