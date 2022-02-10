/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:34:34 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 15:21:23 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{
	private:
		std::string const	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string const& name);
		Bureaucrat(std::string const& name, int const& _grade);
		Bureaucrat(Bureaucrat const& b);
		~Bureaucrat();

		Bureaucrat			&operator=(Bureaucrat const& b);
		std::string	const	getName() const;
		int					getGrade() const;
		void				upgrade();
		void				downgrade();

		class GradeTooHighException : public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual char const	*what() const throw();
		};
};

std::ostream	&operator<<(std::ostream& os, Bureaucrat const& b);

# endif
