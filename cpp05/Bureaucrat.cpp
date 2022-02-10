/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:40:18 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 15:22:38 by dchheang         ###   ########.fr       */
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
		throw Bureaucrat::GradeTooLowException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(Bureaucrat const& b)
{
	*this = b;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const& b)
{
	this->_name = b.getName();
	this->_grade = b.getGrade();
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
		throw Bureaucrat::GradeTooLowException();
}

void	Bureaucrat::downgrade()
{
	_grade++;
	if (_grade > 150)
		throw Bureaucrat::GradeTooHighException();
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

