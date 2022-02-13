/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:11:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/11 07:07:08 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void	constructorTest(std::string name, int signGrade, int execGrade)
{
	std::cout << "name = " << name << ", signGrade = " << signGrade;
	std::cout << ", execGrade = " << execGrade << std::endl;
	try
	{
		Form f(name, signGrade, execGrade);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main()
{
	std::cout << "TEST 1 BAD SIGN GRADE" << std::endl;
	constructorTest("test", -1, 150);
	constructorTest("test", 0, 1);
	constructorTest("test", 151, 50);
	constructorTest("test", -2147483648, 80);
	constructorTest("test", 2147483647, 140);

	std::cout << std::endl << "TEST 2 BAD EXEC GRADE" << std::endl;
	constructorTest("test", 150, -1);
	constructorTest("test", 1, 0);
	constructorTest("test", 50, 151);
	constructorTest("test", 80, -2147483648);
	constructorTest("test", 140, 2147483647);

	std::cout << std::endl << "TEST 3 BAD SIGN AND BAD EXEC GRADE" << std::endl;
	constructorTest("test", -1, -1);
	constructorTest("test", 0, 0);
	constructorTest("test", 180, 151);
	constructorTest("test", -800, -2147483648);
	constructorTest("test", 900, 2147483647);
	constructorTest("test", 900, -21);
	constructorTest("test", -21, 900);

	std::cout << std::endl << "TEST 4 GOOD INSTANCIATIONS" << std::endl;
	constructorTest("test", 150, 150);
	constructorTest("test", 1, 1);
	constructorTest("test", 1, 150);
	constructorTest("test", 150, 1);

	std::cout << std::endl << "TEST 5 BE SIGNED" << std::endl;
	Bureaucrat b5("b5", 1);
	Bureaucrat b6("b6", 150);
	Bureaucrat b7("b7", 2);
	Form f1("f1", 1, 1);
	Form f2("f2", 1, 1);

	try {
		std::cout << b5;
		std::cout << f1;
		f1.beSigned(b5);
		std::cout << f1;
		std::cout << b6;
		f1 = f2;
		f1.beSigned(b6);
		std::cout << f1;
		std::cout << b7;
		f1.beSigned(b7);
		std::cout << f1;
		b7.upgrade();
		std::cout << b7;
		f1.beSigned(b7);
		std::cout << f1;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl << "TEST 6 SIGN FORM" << std::endl;
	Form	f3 = Form("f3", 1, 1);
	Form	f4 = f3;

	std::cout << b6 << f4;
	b6.signForm(f4);
	std::cout << b5 << f4;
	b5.signForm(f4);
	std::cout << f4 << std::endl;
	return (0);
}
