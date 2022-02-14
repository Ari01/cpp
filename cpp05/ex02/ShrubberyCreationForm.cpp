/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:22:07 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 14:38:56 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() :
	Form("unknown", "unknown", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, std::string target) :
	Form(target, name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& scf)
{
	*this = scf;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shruberry destructor called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const& scf)
{
	Form::operator=(scf);
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (checkExecGrade(executor))
	{
		std::string line;
		std::string	path = _target + "_shrubbery";
		std::ofstream ofs(path.c_str());
		std::ifstream ifs("tree.txt");

		if (!ifs.is_open() || !ofs.is_open())
			std::cout << "error could not open file" << std::endl;
		else
		{
			while (ifs)
			{
				std::getline(ifs, line);
				ofs << line << std::endl;
			}
			std::cout << "trees successfully drawn in " << path << std::endl;
			ifs.close();
			ofs.close();
		}
	}
}
