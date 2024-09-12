/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:05:30 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/12 13:30:19 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon(const std::string& type);
		Weapon(const Weapon& other);  // Copy constructor
		Weapon& operator=(const Weapon& other);  // Assignment operator
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string& type);
};

#endif
