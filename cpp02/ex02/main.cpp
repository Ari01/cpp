/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:07:45 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/03 20:19:12 by dchheang         ###   ########.fr       */
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
	std::cout << std::endl << "MIN MAX" << std::endl;
	std::cout << "g = " << g << ", h = " << h << std::endl;
	std::cout << "member func" << std::endl;
	std::cout << "min(g,h) = " << Fixed::min(g,h) << std::endl;
	std::cout << "max(g,h) = " << Fixed::max(g,h) << std::endl;
	std::cout << "non member func" << std::endl;
	std::cout << "min(g,h) = " << min(g,h) << std::endl;
	std::cout << "max(g,h) = " << max(g,h) << std::endl;

	g = g * -1;
	std::cout << std::endl << "g = " << g << ", h = " << h << std::endl;
	std::cout << "member func" << std::endl;
	std::cout << "min(g,h) = " << Fixed::min(g,h) << std::endl;
	std::cout << "max(g,h) = " << Fixed::max(g,h) << std::endl;
	std::cout << "non member func" << std::endl;
	std::cout << "min(g,h) = " << min(g,h) << std::endl;
	std::cout << "max(g,h) = " << max(g,h) << std::endl;

	g = g * -1;
	h = h * -1;
	std::cout << std::endl <<"g = " << g << ", h = " << h << std::endl;
	std::cout << "member func" << std::endl;
	std::cout << "min(g,h) = " << Fixed::min(g,h) << std::endl;
	std::cout << "max(g,h) = " << Fixed::max(g,h) << std::endl;
	std::cout << "non member func" << std::endl;
	std::cout << "min(g,h) = " << min(g,h) << std::endl;
	std::cout << "max(g,h) = " << max(g,h) << std::endl;

	return (0);
}
