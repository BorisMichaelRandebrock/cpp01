/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:41:35 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 19:18:41 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

/*HumanA::HumanA()
	: name(""), weapon("") {}
*/
HumanA::HumanA(const std::string& name, Weapon& weapon)
	: name(name), weapon(weapon) {}

HumanA::HumanA(const HumanA& other) 
	: name(other.name), weapon(other.weapon) {} // Copy constructor

HumanA& HumanA::operator=(const HumanA& other) { // Assignment operator
    if (this != &other) { // Self-assignment check
        name = other.name;
        // weapon is a reference; no need to assign it again
    }
    return *this;
}

HumanA::~HumanA() {}

const  std::string& HumanA::getName() const {
	return name;
}
/*
Weapon HumanA::getWeapon() const {
	return weapon;
}
*/
void HumanA::setName(const std::string& name) {
	this->name = name;
}
/*
void HumanA::setWeapon(Weapon& weapon) {
	this->weapon = weapon;
}
*/
void HumanA::attack() const {
	std::cout << name << " attacks with their " << weapon.getType() <<std::endl;
}

/*
const std::string& HumanA::getName() const {
    return name;
}

void HumanA::setName(const std::string& name) {
    this->name = name;
}

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}*/
