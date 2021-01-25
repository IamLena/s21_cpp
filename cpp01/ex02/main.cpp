/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:10:08 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 21:25:26 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	Zombie z1("smart", "OldBob");
	z1.announce();

	ZombieEvent ze;
	ze.setZombieType("dumb");
	Zombie *newzombie = ze.newZombie("YoungMark");
	Zombie *onemore = ze.randomChump();
	newzombie->announce();
	delete newzombie;
	delete onemore;
}
