/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brandebr <brandebr@42barcelona.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 18:05:30 by brandebr          #+#    #+#             */
/*   Updated: 2024/09/10 18:23:48 by brandebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
#include <string>

class Weapon {
	private:
		std::string type;
	public:
		Weapon();
		Weapon(const std::string& type);
		~Weapon();
		const std::string& getType() const;
		void setType(const std::string& type);
};

#endif
