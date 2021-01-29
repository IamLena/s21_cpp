/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:36:55 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:03:33 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion") {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type) : Enemy(hp, type) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &other) : Enemy(other) {
	std::cout << "* click click click *" << std::endl;
}

RadScorpion &RadScorpion::operator=(RadScorpion const &other) {
	*this = other;
	return (*this);
}

RadScorpion::~RadScorpion() {
	std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int hp) {
	if (this->hp > 0 && hp > 3)
		this->hp = this->hp - hp + 3;
}
