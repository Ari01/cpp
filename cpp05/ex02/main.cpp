/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:11:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 17:45:51 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

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
	Form		*f = new ShrubberyCreationForm("s1", "garden");
	Bureaucrat	noob("noob", 150);
	Bureaucrat	god("god", 1);

	f->beSigned(noob);
	f->beSigned(god);
	f->execute()
	return (0);
}
