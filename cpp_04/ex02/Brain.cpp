#include "Brain.hpp"

Brain::Brain()
{
    for (int i = 0; i < 100; i++)
		this->ideas[i] = "idea";
}

Brain::Brain(Brain &brain)
{
    for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
}
Brain::~Brain()
{

}

Brain& Brain::operator = (Brain &brain)
{
    std::cout << "Brain copy operator called!" << std::endl;
    for (int i = 0; i < 100; i++)
			this->ideas[i] = brain.ideas[i];
    return *this;
}