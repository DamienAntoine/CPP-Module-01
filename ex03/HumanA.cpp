#include "HumanA.hpp"

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _wType(weapon) {}

void	HumanA::attack() const
{
	std::cout
		<< _name
		<< " attacks with their "
		<< _wType.getType()
		<< std::endl;
}
