#ifndef __HUMANA_H__
#define __HUMANA_H__

#include <iostream>
#include "Weapon.hpp"

// ************************************************************************** //
//                               Human A Class                                //
// ************************************************************************** //

class HumanA {

	private:
		std::string	_name;
		Weapon		&_wType;

	public:
		HumanA(const std::string &name, Weapon &weapon);
		void		attack() const;
};

#endif
