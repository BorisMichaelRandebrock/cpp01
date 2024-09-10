/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:40:58 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 19:12:07 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include <string>
#include "Weapon.hpp"

class HumanA {
	private:
		std::string name;
		Weapon& weapon;

	public:
//		HumanA("");
		HumanA(const std::string& name, Weapon& weapon);
		HumanA(const HumanA& other); // copy constructor
		HumanA& operator=(const HumanA& other); //assignement operator
		~HumanA();
		const std::string& getName() const;
		void setName(const std::string& name);
		void attack() const;
};

#endif


