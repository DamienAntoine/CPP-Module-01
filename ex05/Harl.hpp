#ifndef __HARL_H__
#define __HARL_H__

#include <iostream>

// ************************************************************************** //
//                               Harl    Class                                //
// ************************************************************************** //

class Harl {

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Harl::*MemberFuncPtr)(void);
		static const std::pair<std::string, MemberFuncPtr> functions[4];

	public:
		Harl();
		void	complain(std::string level);
};

#endif
