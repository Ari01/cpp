/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 05:52:46 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/15 06:31:34 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int					value;
		static int const	size;
	public:
		Fixed();
		Fixed(Fixed const&);
		~Fixed();
		Fixed	&operator=(Fixed const& f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
