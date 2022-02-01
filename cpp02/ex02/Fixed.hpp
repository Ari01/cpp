/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:52:46 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/01 23:29:33 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value;
		static int const	n_fractional;

	public:
		Fixed();
		Fixed(Fixed const& f);
		Fixed(int const i);
		Fixed(float const f);
		~Fixed();

		Fixed				&operator=(Fixed const& f);
		bool				operator>(Fixed const& f);
		bool				operator<(Fixed const& f);
		bool				operator>=(Fixed const& f);
		bool				operator<=(Fixed const& f);
		bool				operator==(Fixed const& f);
		bool				operator!=(Fixed const& f);
		Fixed				operator+(Fixed const &f);
		Fixed				operator-(Fixed const &f);
		Fixed				operator*(Fixed const &f);
		Fixed				operator/(Fixed const &f);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, Fixed const &f);

#endif
