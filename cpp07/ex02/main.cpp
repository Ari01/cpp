/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 11:35:46 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/18 13:37:56 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main()
{
	Array <int>		a;
	Array <int>		b(10);
	Array <int>		c(b);
	size_t			i;

	// CONSTRUCTORS
	std::cout << "*****************************INT TESTS*****************************" << std::endl;
	std::cout << "a()" << std::endl << a << std::endl;
	std::cout << "b(10)" << std::endl << b << std::endl;
	std::cout << "c(b)" << std::endl << c << std::endl;

	// GETTER SETTER
	std::cout << "setting b[i] = i" << std::endl;
	for (i = 0; i < b.size(); i++)
		b[i] = i;
	std::cout << b << std::endl;

	// AFFECTATION
	a = b;
	std::cout << "a = b" << std::endl << a << std::endl;

	// STRINGS
	std::cout << "*****************************STRING TESTS*****************************" << std::endl;
	Array <std::string>	d;
	Array <std::string>	e(10);
	Array <std::string>	f(e);

	// CONSTRUCTORS
	std::cout << "d()" << std::endl << d << std::endl;
	std::cout << "e(10)" << std::endl << e << std::endl;
	std::cout << "f(e)" << std::endl << f << std::endl;

	// GETTER SETTER
	std::cout << "setting e[i] = string" << std::endl;
	for (i = 0; i < e.size(); i++)
		e[i] = "string";
	std::cout << e << std::endl;

	// AFFECTATION
	d = e;
	std::cout << "d = e" << std::endl << d << std::endl;

	std::cout << "try print d[-1]" << std::endl;
	try
	{
		std::cout << d[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}
