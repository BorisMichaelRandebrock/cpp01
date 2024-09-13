/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:24:00 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/13 17:14:43 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Harl.hpp"

enum	Options {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	WARN,
};

Options stringEnum(const std::string &input) {
	if (input == "DEBUG") return DEBUG;
	else if (input == "INFO") return INFO;
	else if (input == "WARNING") return WARNING;
	else if (input == "ERROR") return ERROR;
	else return WARN;
}


int main(int argc, char **argv) {
	Harl harl;
	if (argc != 2) {
		sleep(1);
		harl.complain("DEBUG");
		sleep(3);
		harl.complain("INFO");
		sleep(3);
		harl.complain("WARNING");
		sleep(3);
		harl.complain("ERROR");
		sleep(2);
	} else {
		std::string input = argv[1];
		Options fullComplain = stringEnum(input); 
	
		switch (fullComplain) {
			case DEBUG:
				sleep(1);
				harl.complain("DEBUG");
			case INFO:
				sleep(3);
				harl.complain("INFO");
			case WARNING:
				sleep(3);
				harl.complain("WARNING");
			case ERROR:
				sleep(3);
				harl.complain("ERROR");
				sleep(2);
				break;
			default:
				std::cout << RED << "Plaese enter a valid choice: <DEBUG>, <INFO>, <WARNING> or <ERROR>" << RESET << std::endl;
				break;
		}
	}
	return 0;
}
