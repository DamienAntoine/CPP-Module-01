#ifndef __WEAPON_H__
#define __WEAPON_H__

#include <iostream>
#include <iomanip>

// ************************************************************************** //
//                               Weapon Class                                 //
// ************************************************************************** //

class Weapon {

	private:
		std::string _type;

	public:
		Weapon(const std::string &type);
		const std::string	&getType() const;
		void				setType(const std::string &type);

};

#endif
