#include <algorithm>
#include <cctype>
#include <iostream>

int main(int ac, char **av)
{
	if(ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	int i = 0;
	while (av[++i])
	{
		int j = -1;
		while(av[i][++j])
			av[i][j] = std::toupper(av[i][j]);
		std::cout << av[i];
	}
	std::cout << std::endl;
	return 0;
}