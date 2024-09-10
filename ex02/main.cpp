/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 14:10:56 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 16:26:03 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;
	
	std::cout << "\033[31m" << str << "\033[0m" << std::endl;
	std::cout << "memory str:                       " << &str << std::endl;
	std::cout << "memory address hold by strPTR:    " << stringPTR << std::endl;
	std::cout << "memory address hold by stringREF: " << &stringREF << std::endl;

	std::cout << "value str:                        " << str << std::endl;
	std::cout << "value hold by strPTR:             " << *stringPTR << std::endl;
	std::cout << "value hold by stringREF:          " << stringREF << std::endl;

	return 0;
}
