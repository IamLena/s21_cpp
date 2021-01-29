/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:50:57 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 12:57:33 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() :
	AWeapon("Power Fist", 8, 50) {}

PowerFist::PowerFist(std::string const & name, int apcost, int damage) :
	AWeapon(name, apcost, damage) {}

PowerFist::PowerFist(PowerFist const &other) :
	AWeapon(other.getName(), other.getAPCost(), other.getDamage()) {}

PowerFist &PowerFist::operator= (PowerFist const &other) {
	*this = other;
	return *this;
}
PowerFist::~PowerFist() {}

void PowerFist::attack() const {
	std::cout << "* pschhh... SBAM! *"<< std::endl;
}
