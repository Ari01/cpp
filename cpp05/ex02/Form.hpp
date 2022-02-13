/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:35:56 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 12:42:16 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class	Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				_sign;
		int const			_signGrade;
		int const			_execGrade;
	
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(Form const& f);
		virtual ~Form();

		Form				&operator=(Form const& f);
		std::string const	getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat const& b);
		void				execute(Bureaucrat const& e) = 0;

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
};

std::ostream	&operator<<(std::ostream& os, Form const &f);

#endif
