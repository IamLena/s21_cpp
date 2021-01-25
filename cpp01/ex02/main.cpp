/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:10:08 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 21:40:54 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"
# include <cstdlib>
# include <unistd.h>

int main(void)
{
	srand( (unsigned) time(NULL) * getpid());

	Zombie z1("smart", "OldBob");
	Zombie rand1("smily");
	z1.announce();
	rand1.announce();

	ZombieEvent ze;
	ze.setZombieType("dumb");
	Zombie *newzombie = ze.newZombie("YoungMark");
	Zombie *onemore = ze.randomChump();
	newzombie->announce();
	delete newzombie;
	delete onemore;
}
