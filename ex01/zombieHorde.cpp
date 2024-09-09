#include <sstream>
#include <sstream>
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		new (&horde[i]) Zombie(name + "_" + std::to_string(i + 1));
	}
/*	for (int i = 0; i < N; i++) {
    horde[i] = Zombie(name + "_" + std::to_string(i + 1));
}*/
	return horde; 
}
