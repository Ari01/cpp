/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:26:34 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 09:09:50 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const x;
		Fixed const y;
	
	public:
		Point();
		Point(Fixed const& x, Fixed const& y);
		Point(float const& x, float const& y);
		Point(Point const& p);
		~Point();
		
		Point	&operator=(Point const& p);
		Fixed	getx(void) const;
		Fixed	gety(void) const;
};

#endif
