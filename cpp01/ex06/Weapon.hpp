/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 16:36:59 by ncolomer          #+#    #+#             */
/*   Updated: 2021/01/26 00:54:42 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);

	void setType(std::string const &type);
	std::string const &getType(void) const;
};

#endif
