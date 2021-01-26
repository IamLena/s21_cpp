/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:16:52 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 17:46:31 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap frag("buddy");

	srand(time(NULL));
	frag.vaulthunter_dot_exe("enemy");
	frag.meleeAttack("enemy");
	frag.rangedAttack("enemy");
	frag.takeDamage(24);
	frag.beRepaired(50);
	frag.takeDamage(42);
	frag.takeDamage(100);
	frag.beRepaired(125);
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");
	frag.vaulthunter_dot_exe("enemy");

	std::cout << "------------------------------" << std::endl;
	ScavTrap scav("bro");

	scav.challengeNewcomer("other enemy");
	scav.meleeAttack("other enemy");
	scav.rangedAttack("other enemy");
	scav.takeDamage(24);
	scav.beRepaired(50);
	scav.takeDamage(42);
	scav.takeDamage(100);
	scav.beRepaired(125);
	scav.challengeNewcomer("other enemy");
	scav.challengeNewcomer("other enemy");
	scav.challengeNewcomer("other enemy");
	scav.challengeNewcomer("other enemy");
	return (0);
}
