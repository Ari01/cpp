/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:43:02 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 17:42:05 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	private:
		std::string	_target;

		void	exec() const;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const& scf);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const& scf);
		virtual void			execute(Bureaucrat const& executor) const;
};

#endif
