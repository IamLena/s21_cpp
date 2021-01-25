/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:28:31 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 22:01:05 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) {
	this->size = N;
	this->horde = new Zombie[this->size];
	std::cout << "Horde is created! Boo!" << std::endl;
}

ZombieHorde::~ZombieHorde() {
	delete[] this->horde;
	std::cout << "Ooops... Horde is dead now!" << std::endl;
}

void ZombieHorde::announce() {
	for (int i = 0; i < this->size; i++)
		this->horde[i].announce();
}



