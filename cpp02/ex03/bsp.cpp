/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:19:23 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/04 23:33:43 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point	vector_sub(Point v1, Point v2)
{
	Fixed	x;
	Fixed	y;

	x = v2.getx() - v1.getx();
	y = v2.gety() - v1.gety();
	return (Point(x,y));
}

Fixed	vector_cross(Point v1, Point v2)
{
	return (v1.getx() * v2.gety() - v1.gety() * v2.getx());
}

bool	is_left(Point v1, Point v2, Point p)
{
	Point	edge;
	Point	vp;

	edge = vector_sub(v1, v2);
	vp = vector_sub(p, v2);
	return (vector_cross(edge, vp) >= 0);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	return (is_left(a, b, point) && is_left(b, c, point) && is_left(c, a, point));
}
