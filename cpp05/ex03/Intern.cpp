/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:14:03 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 17:50:01 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}

Intern::Intern(Intern const& i)
{
	*this = i;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern	&Intern::operator=(Intern const& i)
{
	(void)i;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target) const
{
	std::string	forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon" };
	int			i = 0;

	while (i < 3 && forms[i] != name)
		i++;
	if (i != 3)
		std::cout << "Intern creates " << name << std::endl;
	switch (i)
	{
		case 0:
			return (new ShrubberyCreationForm(name, target));
		case 1:
			return (new RobotomyRequestForm(name, target));
		case 2:
			return (new PresidentialPardonForm(name, target));
		default:
			std::cout << "Intern could not create form " << name;
			std::cout << " because this form does not exist !" << std::endl;
			break ;
	}
	return (NULL);
}
