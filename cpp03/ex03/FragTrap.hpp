/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 13:54:28 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:04:08 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class FragTrap : public ClapTrap {
	public:
		FragTrap();
		FragTrap(std::string const &name);
		FragTrap(FragTrap const &other);
		FragTrap &operator=(FragTrap const &other);
		~FragTrap();

		void vaulthunter_dot_exe(std::string const & target);
};

#endif
