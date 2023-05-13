#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	const WrongAnimal* wrong_meta = new WrongAnimal();
	const WrongAnimal* wrong_cat = new WrongCat();
	
	std::cout << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << wrong_cat->getType() << " " << std::endl;
	
	std::cout << std::endl;
	cat->makeSound();
	dog->makeSound();
	meta->makeSound();
	
	wrong_meta->makeSound();
	wrong_cat->makeSound();
	std::cout << std::endl;
	
	return 0;
}