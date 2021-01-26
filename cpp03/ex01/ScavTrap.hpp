/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:29:08 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 17:43:44 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
# define  SCAVTRAP_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class ScavTrap {
	private:
		int hit_points;// (100)
		int max_hit_points;// (100)
		int energy_points; // (50)
		int max_energy_points;// (50)
		int level; // (1)
		std::string name; // (Parameter of constructor)
		int melee_attack_damage; // (20)
		int ranged_attack_damage; // (15)
		int armor_damage_reduction; // (3)
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		ScavTrap &operator=(ScavTrap const &other);
		~ScavTrap();

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer(std::string const & target);
};

#endif
