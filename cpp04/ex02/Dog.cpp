#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
	*this = obj;
}

Dog& Dog::operator=(const Dog &obj)
{
	delete this->brain;
	this->type = obj.type;
	this->brain = new Brain(*obj.brain);
	return (*this);
}

Dog::~Dog()
{
	delete (this->brain);
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "an appropriate Dog sound" << std::endl;
}