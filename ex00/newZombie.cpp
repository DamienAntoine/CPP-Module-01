#include "Zombie.hpp"

//create zombie, name it and return its name
Zombie*	newZombie(std::string name)
{
	return (new Zombie(name));
}
