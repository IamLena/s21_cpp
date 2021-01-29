/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:44:51 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:04:48 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {
	public:
		PlasmaRifle();
		PlasmaRifle(std::string const & name, int apcost, int damage);
		PlasmaRifle(PlasmaRifle const &other);
		PlasmaRifle &operator= (PlasmaRifle const &other);
		~PlasmaRifle();

		void attack() const;
};

#endif
