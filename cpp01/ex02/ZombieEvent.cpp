/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:55:18 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 21:20:04 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string ZombieEvent::createRandomName() {
	std::string name;
	int namelen = 6;

	char alphanum[] =
		"0123456789"
		"ABCDEFGHIJKLMNOPQRSTUVWXYZ"
		"abcdefghijklmnopqrstuvwxyz";

	srand( (unsigned) time(NULL) * getpid());
	name.reserve(namelen);
	for (int i = 0; i < namelen; ++i)
		name += alphanum[rand() % (sizeof(alphanum) - 1)];
	return name;
}

ZombieEvent::ZombieEvent():type(std::string()) {}

void ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	zombie = new Zombie(this->type, this->createRandomName());
	zombie->announce();
	return (zombie);
}
