#include "Zombie.hpp"

int main()
{
	int i;
	int N = 12;
	std::string name = "Zombie";
	Zombie* horde = zombieHorde(N, name);

	while (i < N)
	{
		horde[i].announce();
		i++;
	}
	delete[] horde;

	return (0);
}
