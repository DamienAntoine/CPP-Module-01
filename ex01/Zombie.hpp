#ifndef __HORDE_H__
#define __HORDE_H__

#include <iostream>
#include <iomanip>

// ************************************************************************** //
//                               Zombie Class                                //
// ************************************************************************** //

class Zombie {

	private:
		std::string _name;

	public:
		Zombie();
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

};

Zombie* zombieHorde( int N, std::string name );

#endif
