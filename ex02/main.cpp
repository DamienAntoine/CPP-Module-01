#include <iostream>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "Address of str: " << &string << std::endl;
	std::cout << "Address of ptr: " << stringPTR << std::endl;
	std::cout << "Address of ref: " << &stringREF << std::endl;

	std::cout << "Value of str: " << string << std::endl;
	std::cout << "Value of ptr: " << *stringPTR << std::endl;
	std::cout << "Value of ref: " << stringREF << std::endl;

	return (0);
}
