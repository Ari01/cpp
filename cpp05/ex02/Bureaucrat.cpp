/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:40:18 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 15:58:41 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

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

Bureaucrat::Bureaucrat(Bureaucrat const& b)
{
	*this = b;
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

void	Bureaucrat::signForm(Form &f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << _name << " signed " << f.getName() << std::endl;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << _name << " couldn't sign " << f.getName();
		std::cout << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(Form const& f) const
{
	try
	{
		f.execute(*this);
		std::cout << _name << " executed " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << _name << " couldn't exexute " << f.getName();
		std::cout << " beacause " << e.what() << std::endl;
	}
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

