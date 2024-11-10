#ifndef __HUMANB_H__
#define __HUMANB_H__

#include <iostream>
#include "Weapon.hpp"

// ************************************************************************** //
//                               Human B Class                                //
// ************************************************************************** //

class HumanB {

	private:
		std::string	_name;
		Weapon		*_wType;

	public:
		HumanB(const std::string &name);
		void	setWeapon(Weapon &weapon);
		void	attack() const;
};

#endif
