/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 15:57:14 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 16:34:19 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator() {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &other) {
	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator const &AssaultTerminator::operator=(AssaultTerminator const &other) {
	return (*this);
}

AssaultTerminator::~AssaultTerminator() {
	std::cout << "I'll be back..." << std::endl;
}

AssaultTerminator* AssaultTerminator::clone() const {
	return new AssaultTerminator();
}

void AssaultTerminator::battleCry() const {
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const {
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const {
	std::cout << "* attacks with chainfists *" << std::endl;
}
