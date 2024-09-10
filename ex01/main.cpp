/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:51:15 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 11:11:04 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <stdlib.h>
#include "Zombie.hpp"

void	help() {
	sleep(1);
	std::cout << std::endl << "                                    HELP, 😱... Zombies  🧟 🧟🧟🧟.... 😨" << std::endl;
	sleep(2);
	std::cout << std::endl << "Dont you worry, van Helsing to rescue..🏃" << std::endl;
	sleep(3);
}

int	main(int argc, char **argv) {
    std::cout << "                         _____" << std::endl;
    std::cout << "                       /      \\ " << std::endl;
    std::cout << "                       | () () |" << std::endl;
    std::cout << "                       |  ^    |" << std::endl;
    std::cout << "                       |  ---  |" << std::endl;
    std::cout << "                       \\______/" << std::endl;
    std::cout << "                     _____|_|_____" << std::endl;
    std::cout << "                   /      | |      \\" << std::endl;
    std::cout << "                  /       | |       \\" << std::endl;
    std::cout << "                 /        | |        \\" << std::endl;
    std::cout << "                /        (   )        \\" << std::endl;
    std::cout << "               /         |_|_|         \\" << std::endl;
    std::cout << "                        /     \\           " << std::endl;
    std::cout << "                       /       \\         " << std::endl;
    std::cout << "                      |         |        " << std::endl;
    std::cout << "                      |         |        " << std::endl;

    std::cout << std::endl << std::endl;

    std::cout << RED;
    std::cout << "   BBBBB    RRRRR    AAAAA   IIIII   N    N   ZZZZZZ  ZZZZZZ " << std::endl;
    std::cout << "   B    B   R    R  A     A    I     NN   N       Z       Z  " << std::endl;
    std::cout << "   BBBBB    RRRRR   AAAAAAA    I     N N  N     Z       Z    " << std::endl;
    std::cout << "   B    B   R   R   A     A    I     N   NN   Z       Z      " << std::endl;
    std::cout << "   BBBBB    R    R  A     A   IIIII  N    N  ZZZZZZ  ZZZZZZZ    OOO   OOO OOO" << std::endl;

    std::cout << RESET;
    std::cout << std::endl;
    if (argc > 1 && argc < 4)
    {
		int num = atoi(argv[1]);
		Zombie *horde = zombieHorde(num, argv[2]);
    	for (int i = 0; i < num; i++) {
		horde[i].announce();
	}
	help();
    delete[] horde;
    } else {
		Zombie *horde = zombieHorde(13, "Boo");
		for (int i = 0; i < 13; i++) {
			horde[i].announce();
		}
		help();

    delete[] horde;
	}
    return 0;
}
