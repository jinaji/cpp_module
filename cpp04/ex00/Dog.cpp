#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& obj)
{
	*this = obj;
}

Dog& Dog::operator=(const Dog &obj)
{
	this->type = obj.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "an appropriate Dog sound" << std::endl;
}