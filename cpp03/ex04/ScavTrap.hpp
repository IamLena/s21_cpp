/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 17:29:08 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:49:15 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SCAVTRAP_HPP
# define  SCAVTRAP_HPP

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include <string>
# include <iostream>
# include <cstdlib>

class ScavTrap : public FragTrap, public NinjaTrap {
	public:
		ScavTrap();
		ScavTrap(std::string const &name);
		ScavTrap(ScavTrap const &other);
		ScavTrap &operator=(ScavTrap const &other);
		~ScavTrap();

		void challengeNewcomer(std::string const & target);
};

#endif
