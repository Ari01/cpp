/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 08:07:45 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/01 23:35:39 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int	main(void)
{
	Fixed		a(-42);
	Fixed const b(10);
	Fixed const	c(42.42f);
	Fixed		d(-42);

	std::cout << "a(-42) < b(10) ? " << (a < b) << std::endl;
	std::cout << "a(-42) <= b(10) ? " << (a <= b) << std::endl;
	std::cout << "a(-42) > b(10) ? " << (a > b) << std::endl;
	std::cout << "a(-42) >= b(10) ? " << (a >= b) << std::endl;
	std::cout << "a(-42) == b(10) ? " << (a == b) << std::endl;
	std::cout << "a(-42) != b(10) ? " << (a != b) << std::endl;
	std::cout << "a(-42) == d(-42) ? " << (a == d) << std::endl;
	std::cout << "a(-42) != d(-42) ? " << (a != d) << std::endl;

	std::cout << "a (-42) + b(10) = " << (a + b) << std::endl;
	std::cout << "a (-42) - b(10) = " << (a - b) << std::endl;
	std::cout << "a (-42) * b(10) = " << (a * b) << std::endl;
	std::cout << "a (-42) / b(10) = " << (a / b) << std::endl;

	return (0);
}
