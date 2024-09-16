/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:11:37 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 11:44:55 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Harl.hpp"

Harl::Harl(void) {
	std::cout << BLUE << "Harl arrived" << RESET << std::endl << std::endl;
	sleep(1);
}

Harl::~Harl(void) {
	std::cout << GREEN << "Harl is leaving" << RESET << std::endl;
}

void Harl::debug(void) {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl;
	sleep(1);
	std::cout << RED << "I really do!" << RESET << std::endl << std::endl;
	sleep(1);
}

void Harl::info(void) {
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	sleep(1);
	std::cout << RED << "You didn’t put enough bacon in my burger!" << std::endl;
	sleep(1);
	std::cout << MAGENTA << "If you did, I wouldn’t be asking for more!" << RESET << std::endl << std::endl;
	sleep(1);
}

void Harl::warning(void) {
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	sleep(1);
	std::cout << RED <<	"I’ve been coming for years whereas you started working here since last month." 
		<< RESET << std::endl << std::endl;
	sleep(1);
}

void Harl::error(void) {
	std::cout << RED_BACKGROUND << "This is unacceptable! I want to speak to the manager now." 
		<< RESET << std::endl << std::endl;
	sleep(1);
}

void Harl::complain(std::string level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int i;
	for (i = 0; i < 4; i++) {
		if (level == levels[i]) 
			break ;
	}
	switch (i) {
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
		{
				this->error();
				break ;
		}
		default:
			std::cout << RED << "some, inconsistent mumbling about god only knows what..." << std::endl;
	}
}
