#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : count(0)
{}

void	PhoneBook::add()
{
	int	index;

	if (this->count != 0)
		index = this->count % 8;
	else
		index = this->count;
	this->contact[index].addContact(index);
	this->count++;
}

void	PhoneBook::searchDisplay(int count)
{
	if (count > 8)
	{
		for (int j = 0; 8 > j; j++)
			this->contact[j].display();
	}
	else
	{
		for (int j = 0; count > j; j++)
			this->contact[j].display();
	}
}

void	PhoneBook::search()
{
	std::string str;
	int	index;

	if (this->count > 8)
		index = this->count % 8;
	else
		index = this->count;
	searchDisplay(this->count);
	std::cout << "INPUT THE INDEX" << std::endl;
	std::getline(std::cin, str);
	index = atoi(str.data());
	if (index >= 0 && count > index)
		this->contact[index].showAll();
	else if (std::cin.eof())
	{
		std::cin.clear();
		clearerr(stdin);
		return ;
	}
	else
		std::cout << "WRONG INDEX" << std::endl;
}

void	PhoneBook::exit(void)
{
	std::cout << "EXIT" << std::endl;
	return ;
}
