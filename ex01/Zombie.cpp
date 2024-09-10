/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:52:00 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 11:32:14 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 
#include "Zombie.hpp"

Zombie::Zombie()
	: name("") {}
	
Zombie::Zombie(std::string name)
	: name(name) {
}

Zombie::~Zombie() {
	std::cout << "Zombie " << name << " has been destroyed ✟" << std::endl;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	
}

std::string Zombie::getName() const {
	return name;
}

void Zombie::setName(std::string name) {
	this -> name = name;
}
