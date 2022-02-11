/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:11:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/11 05:33:40 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	constructorTest(std::string name, int grade)
{
	std::cout << "name = " << name << ", grade = " << grade << std::endl;
	try
	{
		Bureaucrat b(name, grade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "TEST 1 BAD INSTANCIATIONS" << std::endl;
	constructorTest("test", -1);
	constructorTest("test", 0);
	constructorTest("test", 151);
	constructorTest("test", -2147483648);
	constructorTest("test", 2147483647);

	std::cout << std::endl << "TEST 2 GOOD INSTANCIATIONS" << std::endl;
	constructorTest("test", 1);
	constructorTest("test", 150);

	std::cout << std::endl << "TEST 3 BAD UPGRADE DOWNGRADE" << std::endl;
	Bureaucrat b5("test", 1);
	Bureaucrat b6("test", 150);
	try {
		std::cout << b5;
		b5.upgrade();
		std::cout << b5;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << b6;
		b6.downgrade();
		std::cout << b6;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 4 GOOD UPGRADE DOWNGRADE" << std::endl;
	try {
		Bureaucrat b1("b1", 1);
		Bureaucrat b2("b2", 150);
		b5 = b1;
		b6 = b2;
		std::cout << b5;
		b5.downgrade();
		std::cout << b5;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << b6.getGrade() << std::endl;
		b6.upgrade();
		std::cout << b6.getGrade() << std::endl;
	} catch (std::exception e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
