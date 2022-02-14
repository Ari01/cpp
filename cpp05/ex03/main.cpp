/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:11:27 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 17:49:45 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void	testExec(Bureaucrat b, Form *f)
{
	if (f)
	{
		b.signForm(*f);
		b.executeForm(*f);
		std::cout << std::endl;
	}
}

int	main()
{
	Bureaucrat	b("god", 1);
	Intern		i;
	Form		*rrf;
	Form		*scf;
	Form		*ppf;
	Form		*nullf;

	rrf = i.makeForm("robotomy request", "Bender");
	testExec(b, rrf);

	scf = i.makeForm("shrubbery creation", "Garden");
	testExec(b, scf);

	ppf = i.makeForm("presidential pardon", "Michael Scofield");
	testExec(b, ppf);
	std::cout << std::endl;

	nullf = i.makeForm("nullform", "unknown");
	testExec(b, ppf);

	delete(rrf);
	delete(scf);
	delete(ppf);
	return (0);
}
