/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalecto <nalecto@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/26 02:27:50 by nalecto           #+#    #+#             */
/*   Updated: 2021/01/26 13:17:50 by nalecto          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(Fixed const &other);
		virtual ~Fixed();

		Fixed &operator=(Fixed const &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
};

#endif
