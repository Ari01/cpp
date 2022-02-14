/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:35:56 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 14:35:06 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class	Bureaucrat;

class Form
{
	protected:
		std::string	_target;

	private:
		std::string const	_name;
		bool				_sign;
		int const			_signGrade;
		int const			_execGrade;
	
	public:
		Form();
		Form(std::string name, std::string target, int signGrade, int execGrade);
		Form(Form const& f);
		virtual ~Form();

		Form				&operator=(Form const& f);
		std::string const	getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat const& b);
		virtual void		execute(Bureaucrat const& e) const = 0;
		bool				checkExecGrade(Bureaucrat const& e) const;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual char const	*what()	const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual char const	*what()	const throw();
		};
		class NotSignedException : public std::exception
		{
			public:
				virtual char const	*what()	const throw();
		};
};

std::ostream	&operator<<(std::ostream& os, Form const &f);

#endif
