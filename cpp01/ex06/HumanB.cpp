/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:58:26 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 01:05:48 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string const &name):
	name(name), weapon(NULL) {}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void) const
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack because he has no weapon !" << std::endl;
}
