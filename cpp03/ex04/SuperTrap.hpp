/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:29:41 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 00:51:48 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class SuperTrap : public NinjaTrap, public FragTrap {
	public:
		SuperTrap();
		SuperTrap(std::string const &name);
		SuperTrap(SuperTrap const &other);
		SuperTrap &operator=(SuperTrap const &other);
		~SuperTrap();

		void rangedAttack(std::string const &target);
		void meleeAttack(std::string const &target);
};

#endif
