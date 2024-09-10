#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
	std::stringstream ss;
	ss << i + 1;
	std::string z_name = name + " " + ss.str();
	horde[i].setName(z_name);
}
	return horde; 
}
