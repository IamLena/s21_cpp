/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:54:28 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 14:45:47 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class FragTrap {
	private:
		int hit_points;// (100)
		int max_hit_points;// (100)
		int energy_points; // (100)
		int max_energy_points;// (100)
		int level; // (1)
		std::string name; // (Parameter of constructor)
		int melee_attack_damage; // (30)
		int ranged_attack_damage; // (20)
		int armor_damage_reduction; // (5)
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		FragTrap &operator=(FragTrap const &other);
		~FragTrap();

		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void vaulthunter_dot_exe(std::string const & target);
};

#endif
