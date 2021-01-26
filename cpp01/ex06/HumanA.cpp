/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:37:50 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/26 00:57:37 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	name(name), weapon(weapon) {}

void HumanA::attack(void) const
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
