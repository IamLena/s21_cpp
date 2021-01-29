/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/29 13:41:29 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/29 15:04:36 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	private:
		std::string name;
		int ap;
		AWeapon *weapon;
	public:
		Character();
		Character(std::string const & name);
		Character(Character const &other);
		Character const &operator=(Character const &other);
		~Character();

		void recoverAP();
		void equip(AWeapon* weapon);
		void attack(Enemy* enemy);
		std::string const &getName() const;
		int const &getAP() const;
		AWeapon *getAWeapon() const;
};

std::ostream &operator<<(std::ostream &out, Character const &character);

#endif
