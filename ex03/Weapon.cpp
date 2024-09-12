/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:05:22 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 13:29:04 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) 
	: type(type) {}

Weapon::Weapon(const Weapon& other) {
    this->type = other.type;
}

Weapon& Weapon::operator=(const Weapon& other) {
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string& type) {
	this->type = type;
}
