#include <iostream>
#include "Point.hpp"

int main( void ) {
	Point A(0,0);
	Point B(4,0);
	Point C(2,4);

	Point P(2,2);
	
	std::cout << A << std::endl;
	std::cout << B << std::endl;
	std::cout << C << std::endl;
	std::cout << P << std::endl;

	bool answer = bsp(A,B,C,P);
	std::cout << "Is Inside: " << answer << std::endl;
	return 0;
}