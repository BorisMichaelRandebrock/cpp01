/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:01:32 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 12:01:38 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "colors.hpp"

/*HumanB::HumanB()
	: name("") {}
*/
HumanB::HumanB(const std::string& name)
	: name(name), weapon(NULL) {
//	Weapon weapon();		
}

HumanB::HumanB(const HumanB& other)
	: name(other.name), weapon(other.weapon) {}

HumanB& HumanB::operator=(const HumanB& other) {
	if (this != &other) {
		name = other.name;
		weapon = other.weapon;
	}
	return *this;
}

HumanB::~HumanB() {};

const std::string& HumanB::getName() const {
	return name;
}

void HumanB::setName(const std::string& name) {
	this->name = name;
}

void HumanB::setWeapon(Weapon& weapon) {
	this->weapon = &weapon;
}

void HumanB::attack() const {
	if (weapon) {
		std::cout << name << " attacks with their " << BOLD << RED << weapon->getType() << RESET << std::endl;
	} else {
		std::cout << name << " has no weapon!" << std::endl;
	};
}

