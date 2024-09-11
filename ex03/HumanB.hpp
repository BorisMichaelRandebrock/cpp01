#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
	std::string name;
	Weapon* weapon;

	public:
	//HumanB("");
	HumanB(const std::string& name);
	HumanB(const HumanB& other);
	HumanB& operator=(const HumanB& other);
	~HumanB();

	const std::string& getName() const;
	void setName(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack() const;
};
#endif
