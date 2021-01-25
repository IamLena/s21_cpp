/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 21:28:31 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 21:57:40 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class ZombieHorde {
	private:
		int size;
		Zombie *horde;
	public:
		ZombieHorde(int N);
		~ZombieHorde();

		void announce();
};

#endif
