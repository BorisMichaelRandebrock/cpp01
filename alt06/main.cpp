/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:24:00 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/16 11:44:38 by brandebr         ###   ########.fr       */
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
	if (argc == 2) {
		std::string input = argv[1];
		harl.complain(input);
	} else { 
		harl.complain("Whatever is wrong");
	}

	return 0;
}
