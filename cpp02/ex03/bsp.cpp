/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 22:19:23 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 10:39:26 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	sign(Point p1, Point p2, Point p3)
{
	return (p1.getx()- p3.getx()) * (p2.gety() - p3.gety()) - (p2.getx() - p3.getx()) * (p1.gety() - p3.gety());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool b1, b2, b3;

	b1 = sign(point, a, b) < 0;
	b2 = sign(point, b, c) < 0;
	b3 = sign(point, c, a) < 0;
	return ((b1 == b2) && (b2 == b3));
}
