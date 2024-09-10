/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:05:22 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 18:39:01 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon()
	: type("") {}

Weapon::Weapon(const std::string& type) 
	: type(type) {}

Weapon::~Weapon() {}

const std::string& Weapon::getType() const {
	return type;
}

void Weapon::setType(const std::string& type) {
	this->type = type;
}
