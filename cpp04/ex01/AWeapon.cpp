/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:36:34 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 14:10:14 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon() : name(""), apcost(0), damage(0) {}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
name(name), apcost(apcost), damage(damage) {}

AWeapon::AWeapon(AWeapon const &other) {
	this->name = other.getName();
	this->apcost = other.getAPCost();
	this->damage = other.getDamage();
}

AWeapon &AWeapon::operator= (AWeapon const &other) {
	this->name = other.getName();
	this->apcost = other.getAPCost();
	this->damage = other.getDamage();
	return (*this);
}

AWeapon::~AWeapon() {}

std::string const &AWeapon::getName() const {
	return this->name;
}
int AWeapon::getAPCost() const {
	return this->apcost;
}
int AWeapon::getDamage() const {
	return this->damage;
}
