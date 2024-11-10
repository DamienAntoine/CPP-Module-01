#include "HumanB.hpp"

HumanB::HumanB(const std::string &name) : _name(name), _wType(nullptr) {}

void	HumanB::setWeapon(Weapon &weapon)
{
	_wType = &weapon;
}

void	HumanB::attack() const
{
	if (_wType)
	{
		std::cout
			<< _name
			<< " attacks with their "
			<< _wType->getType()
			<< std::endl;
	}
}
