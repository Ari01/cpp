/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:40:18 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/11 05:32:02 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() :
	_name("unknown"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const& name) :
	_name(name), _grade(150) {}

Bureaucrat::Bureaucrat(std::string const& name, int const& grade) :
	_name(name)
{
	_grade = grade;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& b) : _name(b._name), _grade(b._grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const& b)
{
	std::string	*tmp = (std::string *)&_name;

	*tmp = b._name;
	_grade = b._grade;
	return (*this);
}

std::string	const Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::upgrade()
{
	_grade--;
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::downgrade()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

char const	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("GradeTooHighException");
}

char const	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("GradeTooLowException");
}

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (os);
}

