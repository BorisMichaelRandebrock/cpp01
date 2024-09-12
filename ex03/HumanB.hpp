/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:01:48 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 13:22:22 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
	std::string name;
	Weapon* weapon;

	public:
	HumanB(const std::string& name);
	HumanB(const HumanB& other);
	HumanB& operator=(const HumanB& other);
	~HumanB();

	const std::string& getName() const;
	void setName(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack() const;
};
#endif
