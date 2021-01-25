/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:52:32 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 22:01:47 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	this->type = "unknown";
	this->setRandomName();
}

Zombie::Zombie(std::string type): type(type) {
	this->setRandomName();
}

Zombie::Zombie(std::string type, std::string name): type(type), name(name) {}

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "Braiiiiiiinnnssss ..." << std::endl;
}

void Zombie::setRandomName() {
	std::string name;
	int namelen = 6;
	char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	name.reserve(namelen);
	for (int i = 0; i < namelen; ++i)
		name += alphanum[rand() % (sizeof(alphanum) - 1)];
	this->name = name;
}
