/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:24:00 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 19:12:52 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "Harl.hpp"

int main() {
	
	//std::cin >> user;
	Harl harl;
	sleep(1);
	harl.complain("DEBUG");
	sleep(3);
	harl.complain("INFO");
	sleep(3);
	harl.complain("WARNING");
	sleep(3);
	harl.complain("ERROR");
	sleep(2);
	return 0;
}
