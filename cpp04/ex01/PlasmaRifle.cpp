/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:47:03 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:02:48 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() :
	AWeapon("Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle(std::string const & name, int apcost, int damage) :
	AWeapon(name, apcost, damage) {}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &other) : AWeapon(other) {}

PlasmaRifle &PlasmaRifle::operator= (PlasmaRifle const &other) {
	*this = other;
	return *this;
}
PlasmaRifle::~PlasmaRifle() {}

void PlasmaRifle::attack() const {
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
