/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:52:05 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:20:39 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine() {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const &other) {
	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine const &TacticalMarine::operator=(TacticalMarine const &other) {
	return (*this);
}

TacticalMarine::~TacticalMarine() {
	std::cout << "Aaargh..." << std::endl;
}

TacticalMarine* TacticalMarine::clone() const {
	return new TacticalMarine();
}

void TacticalMarine::battleCry() const {
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const {
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const {
	std::cout << "* attacks with a chainsword *" << std::endl;
}

