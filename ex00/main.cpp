#include "Zombie.hpp"

int	main()
{
	Zombie *_zmb = newZombie("Zombie 1");
	_zmb->announce();
	randomChump("Zombie 2");
	delete _zmb;
}
