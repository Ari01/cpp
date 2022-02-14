/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:29:33 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 14:38:20 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm() : Form("unknown", "unknown", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string name, std::string target) :
	Form(target, name, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& rrf)
{
	*this = rrf;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robotomy destructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const& rrf)
{
	Form::operator=(rrf);
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const& e) const
{
	srand(time(0));
	if (checkExecGrade(e))
	{
		std::cout << "* Bzzzzz... bzz... *" << std::endl;
		std::cout << _target;
		rand() % 2 ?
			std::cout << " has been successfully robotomized" :
			std::cout << " couldn't be robotomized";
		std::cout << std::endl;
	}
}
