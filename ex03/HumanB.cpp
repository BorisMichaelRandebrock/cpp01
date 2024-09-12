/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:01:32 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 13:13:17 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"
#include "colors.hpp"

HumanB::HumanB(const std::string& name)
	: name(name), weapon(NULL) {
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
		std::cout << "... " << BLUE << name << " has no weapon!" << RESET << std::endl;
	};
}

