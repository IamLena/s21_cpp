/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 12:50:35 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:04:55 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include "AWeapon.hpp"

class PowerFist : public AWeapon {
	public:
		PowerFist();
		PowerFist(std::string const & name, int apcost, int damage);
		PowerFist(PowerFist const &other);
		PowerFist &operator= (PowerFist const &other);
		~PowerFist();

		void attack() const;
};

#endif
