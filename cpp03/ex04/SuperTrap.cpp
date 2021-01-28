/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:29:59 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 00:52:09 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap() : FragTrap(), NinjaTrap() {
	std::cout << "SuperTrap default constructor" << std::endl;
	this->hit_points = this->FragTrap::hit_points;
	this->max_hit_points = this->FragTrap::max_hit_points;
	this->energy_points = this->NinjaTrap::energy_points;
	this->max_energy_points = this->NinjaTrap::max_energy_points;
	this->level = 1;
	this->melee_attack_damage = this->NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = this->FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = this->FragTrap::armor_damage_reduction;
}

SuperTrap::SuperTrap(std::string const &name) : FragTrap(name), NinjaTrap(name) {
	std::cout << "with name SuperTrap constructor" << std::endl;
	this->hit_points = this->FragTrap::hit_points;
	this->max_hit_points = this->FragTrap::max_hit_points;
	this->energy_points = this->NinjaTrap::energy_points;
	this->max_energy_points = this->NinjaTrap::max_energy_points;
	this->level = 1;
	this->melee_attack_damage = this->NinjaTrap::melee_attack_damage;
	this->ranged_attack_damage = this->FragTrap::ranged_attack_damage;
	this->armor_damage_reduction = this->FragTrap::armor_damage_reduction;
}

SuperTrap::SuperTrap(SuperTrap const &other) {
	std::cout << "copy SuperTrap constructor" << std::endl;
	*this = other;
}

SuperTrap &SuperTrap::operator=(SuperTrap const &other) {
	std::cout << "assign SuperTrap operator" << std::endl;
	*this = other;
	return (*this);
}

SuperTrap::~SuperTrap() {
	std::cout << "SuperTrap destructor" << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
