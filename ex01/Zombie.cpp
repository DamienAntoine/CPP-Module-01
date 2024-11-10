#include "Zombie.hpp"

//default constr
Zombie::Zombie() : _name("empty") {
}

//constr
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie : "
	<< _name
	<< " created"
	<< std::endl;
}

//destr
Zombie::~Zombie()
{
	std::cout << "Zombie : "
	<< _name
	<< " destroyed"
	<< std::endl;
}

void	Zombie::announce(void)
{
	std::cout	<< this->_name
				<< " : BraiiiiiiinnnzzzZ..."
				<< std::endl;
}

void Zombie::setName(std::string name){
	_name = name;
}
