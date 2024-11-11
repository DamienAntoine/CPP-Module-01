#include <iostream>
#include <fstream>
#include <string>

int	replace_string(std::string file, std::string stringReplaced, std::string stringNew)
{
	std::ifstream inputFile(file);
	std::ofstream outputFile(file + ".replace");

	if (!inputFile.is_open() || !outputFile.is_open())
	{
		std::cerr << "Error: Could not open files." << std::endl;
		return 1;
	}

	std::string line;
	while (std::getline(inputFile, line))
	{
		size_t pos = 0;
		while ((pos = line.find(stringReplaced, pos)) != std::string::npos)
		{
			line.erase(pos, stringReplaced.length());
			line.insert(pos, stringNew);
			pos += stringNew.length();
		}
		outputFile << line << std::endl;
	}

	inputFile.close();
	outputFile.close();
	return 0;
}

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		std::string filename = argv[1];
		std::string stringReplaced = argv[2];
		std::string stringNew = argv[3];
		if (replace_string(filename, stringReplaced, stringNew) == 1)
			return (1);
	}
	else
		std::cout << "Usage: \"./replace <file> <string1> <string2>\"" << std::endl;
	return (0);
}
