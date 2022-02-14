/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:46:15 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 14:35:22 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : _name("unknown"), _sign(0), _signGrade(150), _execGrade(150) {}

Form::Form(std::string target, std::string name, int signGrade, int execGrade) :
	_target(target), _name(name), _sign(0),  _signGrade(signGrade), _execGrade(execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const& f) :
	_name(f._name), _sign(f._sign), _signGrade(f._signGrade), _execGrade(f._execGrade)
{
	if (_signGrade < 1 || _execGrade < 1)
		throw Form::GradeTooHighException();
	if (_signGrade > 150 || _execGrade > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form	&Form::operator=(Form const& f)
{
	std::string	*ntmp = (std::string *)&_name;
	int			*sgtmp = (int *)&_signGrade;
	int			*egtmp = (int *)&_execGrade;

	*ntmp = f._name;
	_sign = f._sign;
	_target = f._target;
	*sgtmp = f._signGrade;
	*egtmp = f._execGrade;
	return (*this);
}

std::string const	Form::getName() const
{
	return (_name);
}

bool	Form::getSign() const
{
	return (_sign);
}

int	Form::getSignGrade() const
{
	return (_signGrade);
}

int	Form::getExecGrade() const
{
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat const& b)
{
	if (b.getGrade() <= _signGrade)
		_sign = 1;
	else
		throw Form::GradeTooLowException();
}

bool	Form::checkExecGrade(Bureaucrat const& e) const
{
	if (!getSign())
		throw Form::NotSignedException();
	else if (e.getGrade() > getExecGrade())
		throw Form::GradeTooLowException();
	else
		return (true);
	return (false);
}

char const	*Form::GradeTooHighException::what() const throw()
{
	return ("Form::GradeTooHighException");
}

char const	*Form::GradeTooLowException::what() const throw()
{
	return ("Form::GradeTooLowException");
}

char const	*Form::NotSignedException::what() const throw()
{
	return ("Form::NotSignedException");
}

std::ostream	&operator<<(std::ostream& os, Form const& f)
{
	os << "Form " << f.getName();
	os << ", signed = " << f.getSign();
	os << ", signGrade = " << f.getSignGrade();
	os << ", execGrade = " << f.getExecGrade();
	os << std::endl;
	return (os);
}
