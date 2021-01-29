/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:24:42 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:17:34 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
	private:
		std::string name;
		int apcost;
		int damage;
	public:
		AWeapon();
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &other);
		AWeapon &operator= (AWeapon const &other);
		virtual ~AWeapon();

		std::string const &getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};

#endif
