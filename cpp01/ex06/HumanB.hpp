/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:37:25 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/26 01:05:55 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string name;
	const Weapon *weapon;
public:
	HumanB(std::string const &name);

	void setWeapon(const Weapon &weapon);
	void attack(void) const;
};

#endif
