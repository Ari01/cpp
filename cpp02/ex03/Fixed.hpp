/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:52:46 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/04 22:03:52 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					value;
		static int const	n_fractional;

	public:
		// consts dest
		Fixed();
		Fixed(Fixed const& f);
		Fixed(int const i);
		Fixed(float const f);
		~Fixed();

		// accessors
		int					getRawBits(void) const;
		void				setRawBits(int const raw);

		// conversion
		float				toFloat(void) const;
		int					toInt(void) const;

		// operators
		Fixed				&operator=(Fixed const& f);
		bool				operator>(Fixed const& f);
		bool				operator<(Fixed const& f);
		bool				operator>=(Fixed const& f);
		bool				operator<=(Fixed const& f);
		bool				operator==(Fixed const& f);
		bool				operator!=(Fixed const& f);
		Fixed				operator+(Fixed const& f);
		Fixed				operator-(Fixed const& f);
		Fixed				operator*(Fixed const& f);
		Fixed				operator/(Fixed const& f);
		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

		// min max
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
};

Fixed			&min(Fixed &f1, Fixed &f2);
Fixed			&max(Fixed &f1, Fixed &f2);
std::ostream	&operator<<(std::ostream &os, Fixed const &f);

#endif
