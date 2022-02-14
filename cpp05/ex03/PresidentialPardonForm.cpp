/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:25:21 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 17:48:52 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("unknown", "unknown", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string name, std::string target) :
	Form(target, name, 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& rrf)
{
	*this = rrf;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "Presidential destructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const& rrf)
{
	Form::operator=(rrf);
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const& e) const
{
	if (checkExecGrade(e))
	{
		std::cout << _target << " has been granted the Zaphod Beeblebrox pardon" << std::endl;
	}
}
