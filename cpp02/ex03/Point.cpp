/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 21:35:44 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 09:10:41 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(Fixed const& _x, Fixed const& _y) : x(_x), y(_y) {}

Point::Point(float const& _x, float const& _y) : x(_x), y(_y) {}

Point::Point(Point const &p)
{
	*this = p;
}

Point::~Point() {}

Point	&Point::operator=(Point const& p)
{
	Fixed *tx;
	Fixed *ty;

	tx = (Fixed *)&this->x;
	ty = (Fixed *)&this->y;
	*tx = p.getx();
	*ty = p.gety();
	return (*this);
}

Fixed	Point::getx(void) const
{
	return (x);
}

Fixed	Point::gety(void) const
{
	return (y);
}
