/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/25 20:51:27 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/25 21:57:36 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>

class Zombie
{
	private:
		std::string	type;
		std::string	name;
		void setRandomName();
	public:
		Zombie();
		Zombie(std::string type);
		Zombie(std::string type, std::string name);
		void announce();
};

#endif
