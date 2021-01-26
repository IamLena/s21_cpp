/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 18:20:26 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 18:25:08 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>
# include <string>
# include <cstdlib>

class NinjaTrap : public ClapTrap {
	public:
		NinjaTrap();
		NinjaTrap(std::string const &name);
		NinjaTrap(NinjaTrap const &other);
		NinjaTrap &operator=(NinjaTrap const &other);
		~NinjaTrap();

		void ninjaShoebox();
};

#endif
