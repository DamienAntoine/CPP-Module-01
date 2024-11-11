#include "Harl.hpp"

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		Harl harl;
		std::string	level = argv[1];
		harl.complain(level);
	}
	else
	{
		std::cout	<< "Usage: \"./Harl <level>\""
					<< std::endl
					<< "Levels: \"DEBUG\", \"INFO\", \"WARNING\", \"ERROR\""
					<< std::endl;
		return (1);
	}
	return (0);
}
//misunderstood the assignment, have to start again
