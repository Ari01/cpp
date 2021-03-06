/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 05:35:56 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/11 06:43:19 by dchheang         ###   ########.fr       */
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
		~Form();

		Form				&operator=(Form const& f);
		std::string const	getName() const;
		bool				getSign() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		void				beSigned(Bureaucrat const& b);

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
