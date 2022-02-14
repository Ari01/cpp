/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:11:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 15:59:22 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void	test_exec(Form *f, Bureaucrat &b)
{
	try
	{
		f->execute(b);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int	main()
{
	Form		*shrubbery = new ShrubberyCreationForm("shrubForm", "garden");
	Form		*robotomy = new RobotomyRequestForm("robForm", "Human C3PO");
	Form		*presidential = new PresidentialPardonForm("presForm", "Michael Scofield");
	Bureaucrat	noob("noob", 150);
	Bureaucrat	god("god", 1);

	std::cout << "SHRUBBERY TESTS" << std::endl;
	test_exec(shrubbery, god);
	noob.signForm(*shrubbery);
	god.signForm(*shrubbery);
	test_exec(shrubbery, noob);
	test_exec(shrubbery, god);

	std::cout << std::endl << "ROBOTOMY TESTS" << std::endl;
	test_exec(robotomy, god);
	noob.signForm(*robotomy);
	god.signForm(*robotomy);
	test_exec(robotomy, noob);
	test_exec(robotomy, god);

	std::cout << std::endl << "PRESIDENTIAL TESTS" << std::endl;
	test_exec(presidential, god);
	noob.signForm(*presidential);
	god.signForm(*presidential);
	test_exec(presidential, noob);
	test_exec(presidential, god);

	std::cout << std::endl << "Bureaucrat.exec TESTS" << std::endl;
	noob.executeForm(*shrubbery);
	noob.executeForm(*robotomy);
	noob.executeForm(*presidential);
	god.executeForm(*shrubbery);
	god.executeForm(*robotomy);
	god.executeForm(*presidential);

	std::cout << std::endl;
	delete (shrubbery);
	delete (robotomy);
	delete (presidential);
	return (0);
}
