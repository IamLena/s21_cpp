/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:20:33 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:25:14 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap() {
	std::cout << "NinjaTrap default constructor" << std::endl;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(std::string const &name) : ClapTrap(name) {
	std::cout << "with name NinjaTrap constructor" << std::endl;
	this->hit_points = 60;
	this->max_hit_points = 60;
	this->energy_points = 120;
	this->max_energy_points = 120;
	this->level = 1;
	this->melee_attack_damage = 60;
	this->ranged_attack_damage = 5;
	this->armor_damage_reduction = 0;
}

NinjaTrap::NinjaTrap(NinjaTrap const &other) {
	std::cout << "copy NinjaTrap constructor" << std::endl;
	*this = other;
}

NinjaTrap &NinjaTrap::operator=(NinjaTrap const &other) {
	std::cout << "assign NinjaTrap operator" << std::endl;
	*this = other;
	return (*this);
}

NinjaTrap::~NinjaTrap() {
	std::cout << "NinjaTrap destructor" << std::endl;
}

void NinjaTrap::ninjaShoebox() {
	std::cout << "NinjaTrap " << this->name << " is doing something useless but surely FUNNY!" << std::endl;
}
