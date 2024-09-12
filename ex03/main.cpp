/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 17:52:52 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 12:40:45 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <unistd.h>
#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include "colors.hpp"



int main(void) {

	std::cout << "\033[2J\033[H" << std::endl;
	std::cout << YELLOW << "The following is a very sad,...." << std::endl;
	sleep(5);
	std::cout << "\033[2J\033[H" << std::endl;
	std::cout << "... indeed very, very sad..." << std::endl;
	sleep(5);
	std::cout << "\033[2J\033[H" << std::endl;
	std::cout << BLUE << "...representation of an ancient habbit of the human beings:.." << std::endl;
	sleep(5);
	std::cout << "\033[2J\033[H" << std::endl;
	std::cout << YELLOW << "Showcasting just:" << std::endl;
	sleep(5);
	std::cout << "\033[2J\033[H" << std::endl;
	std::cout << RED_BACKGROUND <<  "Too much, and unneccesary violence... " << RESET << std::endl;
	sleep(5);  
	std::cout << "\033[2J\033[H" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		sleep(1);  
		club.setType("silly, gummy clubs");
		bob.attack();
		sleep(1);  
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		sleep(2);
		jim.setWeapon(club);
		jim.attack();
		sleep(1);  
		club.setType("bananas");
		jim.attack();
	}
	return 0;
}
