/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:07:45 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 08:45:37 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a(-42);
	Fixed		b(10);
	Fixed const	c(42.42f);
	Fixed		d(-42);
	Fixed		e;
	Fixed		f(Fixed(5.05f) * Fixed(2));

	// COMPARE
	std::cout << "COMPARISON PART" << std::endl << std::endl;
	std::cout << "a(-42) < b(10) ? " << (a < b) << std::endl;
	std::cout << "a(-42) <= b(10) ? " << (a <= b) << std::endl;
	std::cout << "a(-42) > b(10) ? " << (a > b) << std::endl;
	std::cout << "a(-42) >= b(10) ? " << (a >= b) << std::endl;
	std::cout << "a(-42) == b(10) ? " << (a == b) << std::endl;
	std::cout << "a(-42) != b(10) ? " << (a != b) << std::endl;
	std::cout << "a(-42) == d(-42) ? " << (a == d) << std::endl;
	std::cout << "a(-42) != d(-42) ? " << (a != d) << std::endl;

	// ARITHMETIC
	std::cout << std::endl << "ARITHMETIC PART" << std::endl;
	std::cout << "a(-42) + b(10) = " << (a + b) << std::endl;
	std::cout << "a(-42) - b(10) = " << (a - b) << std::endl;
	std::cout << "a(-42) * b(10) = " << (a * b) << std::endl;
	std::cout << "a(-42) / b(10) = " << (a / b) << std::endl;
	std::cout << "f(5.05f * 2) = " << f << std::endl;

	// INCREMENT
	std::cout << std::endl << "INCREMENT" << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "++e(0) = " << ++e << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "e++ = " << e++ << std::endl;
	std::cout << "e = " << e << std::endl;

	// DECREMENT
	std::cout << std::endl << "DECREMENT" << std::endl;
	e = -42;
	std::cout << "e = " << e << std::endl;
	std::cout << "--e = " << (--e) << std::endl;
	std::cout << "e-- = " << (e--) << std::endl;
	std::cout << "e = " << e << std::endl;
	e = 42;
	std::cout << "e = " << e << std::endl;
	std::cout << "--e = " << (--e) << std::endl;
	std::cout << "e-- = " << (e--) << std::endl;
	std::cout << "e = " << e << std::endl;

	// MIN MAX
	Fixed g(-42.42f);
	Fixed h(42.43f);
	const Fixed i(-42.42f);
	const Fixed	j(42.43f);
	Fixed *tmpi = (Fixed *)&i;
	Fixed *tmpj = (Fixed *)&j;

	std::cout << std::endl << "MIN MAX" << std::endl;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "non const func" << std::endl;
	std::cout << "min(g,h) = " << Fixed::min(g,h) << std::endl;
	std::cout << "max(g,h) = " << Fixed::max(g,h) << std::endl;
	std::cout << "const func" << std::endl;
	std::cout << "min(i,j) = " << Fixed::min(i,j) << std::endl;
	std::cout << "max(i,j) = " << Fixed::max(i,j) << std::endl;

	g = g * -1;
	*tmpi = *tmpi * -1;
	std::cout << std::endl << "g = " << g << ", h = " << h << std::endl;
	std::cout << "non const func" << std::endl;
	std::cout << "min(g,h) = " << Fixed::min(g,h) << std::endl;
	std::cout << "max(g,h) = " << Fixed::max(g,h) << std::endl;
	std::cout << "const func" << std::endl;
	std::cout << "min(i,j) = " << Fixed::min(i,j) << std::endl;
	std::cout << "max(i,j) = " << Fixed::max(i,j) << std::endl;

	g = g * -1;
	h = h * -1;
	*tmpi = *tmpi * -1;
	*tmpj = *tmpj * -1;
	std::cout << std::endl <<"g = " << g << ", h = " << h << std::endl;
	std::cout << "member func" << std::endl;
	std::cout << "min(i,j) = " << Fixed::min(i,j) << std::endl;
	std::cout << "max(i,j) = " << Fixed::max(i,j) << std::endl;
	std::cout << "non member func" << std::endl;
	std::cout << "min(i,j) = " << Fixed::min(i,j) << std::endl;
	std::cout << "max(i,j) = " << Fixed::max(i,j) << std::endl;

	return (0);
}
