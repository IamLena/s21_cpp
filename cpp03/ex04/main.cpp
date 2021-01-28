/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:16:52 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 01:00:20 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	// {
	// 	FragTrap frag("buddy");

	// 	srand(time(NULL));
	// 	frag.vaulthunter_dot_exe("enemy");
	// 	frag.meleeAttack("enemy");
	// 	frag.rangedAttack("enemy");
	// 	frag.takeDamage(24);
	// 	frag.beRepaired(50);
	// 	frag.takeDamage(42);
	// 	frag.takeDamage(100);
	// 	frag.beRepaired(125);
	// 	frag.vaulthunter_dot_exe("enemy");
	// 	frag.vaulthunter_dot_exe("enemy");
	// 	frag.vaulthunter_dot_exe("enemy");
	// 	frag.vaulthunter_dot_exe("enemy");
	// }
	// std::cout << "------------------------------" << std::endl;
	// {
	// 	ScavTrap scav("bro");
	// 	scav.challengeNewcomer("other enemy");
	// 	scav.meleeAttack("other enemy");
	// 	scav.rangedAttack("other enemy");
	// 	scav.takeDamage(24);
	// 	scav.beRepaired(50);
	// 	scav.takeDamage(42);
	// 	scav.takeDamage(100);
	// 	scav.beRepaired(125);
	// 	scav.challengeNewcomer("other enemy");
	// 	scav.challengeNewcomer("other enemy");
	// 	scav.challengeNewcomer("other enemy");
	// 	scav.challengeNewcomer("other enemy");
	// }
	// std::cout << "------------------------------" << std::endl;
	// {
	// 	NinjaTrap ninja("amigo");
	// 	ninja.ninjaShoebox();
	// 	ninja.meleeAttack("one more enemy");
	// 	ninja.rangedAttack("one more enemy");
	// 	ninja.takeDamage(24);
	// 	ninja.beRepaired(50);
	// 	ninja.takeDamage(42);
	// 	ninja.takeDamage(100);
	// 	ninja.beRepaired(125);
	// 	ninja.ninjaShoebox();
	// 	ninja.ninjaShoebox();
	// 	ninja.ninjaShoebox();
	// 	ninja.ninjaShoebox();
	// }
	// std::cout << "------------------------------" << std::endl;
	{
		SuperTrap super("friend");
		super.ninjaShoebox();
		super.meleeAttack("one more enemy");
		super.rangedAttack("one more enemy");
		super.takeDamage(24);
		super.beRepaired(50);
		super.takeDamage(42);
		super.takeDamage(100);
		super.beRepaired(125);
		super.ninjaShoebox();
		super.ninjaShoebox();
		super.ninjaShoebox();
		super.ninjaShoebox();

		srand(time(NULL));
		super.vaulthunter_dot_exe("enemy");
		super.meleeAttack("enemy");
		super.rangedAttack("enemy");
		super.takeDamage(24);
		super.beRepaired(50);
		super.takeDamage(42);
		super.takeDamage(100);
		super.beRepaired(125);
		super.vaulthunter_dot_exe("enemy");
		super.vaulthunter_dot_exe("enemy");
		super.vaulthunter_dot_exe("enemy");
		super.vaulthunter_dot_exe("enemy");
	}
	return (0);
}
