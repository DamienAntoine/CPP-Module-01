#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie _zmb = Zombie(name);
	_zmb.announce();
}
