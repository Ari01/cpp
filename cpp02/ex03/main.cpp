/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:07:45 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 10:31:13 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void	ft_bsp(char pname, Point a, Point b, Point c, Point p, bool expected)
{
	bool		tmp;
	std::string	ok;

	tmp = bsp(a,b,c,p);
	ok = (tmp == expected ? " OK" : " KO");
	std::cout << pname << " in abc ? " << tmp << ok << std::endl;
}

int	main(void)
{
	Point	a(0,0);
	Point	b(2,2);
	Point	c(4,0);
	Point	p(2,1);

	std::cout << "a(0,0); b(2,2); c(4,0); p(1,1)" << std::endl;
	ft_bsp('a', a, b, c, a, 0);
	ft_bsp('b', a, b, c, b, 0);
	ft_bsp('c', a, b, c, c, 0);
	ft_bsp('p', a, b, c, p, 1);

	p = Point(-4,-4);
	std::cout << std::endl << "p(-4,-4)" << std::endl;
	ft_bsp('p', a, b, c, p, 0);

	p = Point(10,10);
	std::cout << std::endl << "p(10,10)" << std::endl;
	ft_bsp('p', a, b, c, p, 0);

	p = Point(-10,-10);
	std::cout << std::endl << "p(-10,-10)" << std::endl;
	ft_bsp('p', a, b, c, p, 0);

	p = Point(2.5f, 0.5f);
	std::cout << std::endl << "p(2.5f,0.5f)" << std::endl;
	ft_bsp('p', a, b, c, p, 1);

	p = Point(4,1);
	std::cout << std::endl << "p(4,1)" << std::endl;
	ft_bsp('p', a, b, c, p, 0);
	return (0);
}
