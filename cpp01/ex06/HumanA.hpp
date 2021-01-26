/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 00:55:41 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 00:57:23 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string name;
		const Weapon &weapon;
	public:
		HumanA(std::string const &name, const Weapon &weapon);
		void attack(void) const;
};

#endif
