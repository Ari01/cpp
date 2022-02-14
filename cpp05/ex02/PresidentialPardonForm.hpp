/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:20:37 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 15:25:11 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string name, std::string target);
		PresidentialPardonForm(PresidentialPardonForm const& ppf);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm		&operator=(PresidentialPardonForm const& ppf);
		virtual void				execute(Bureaucrat const& e) const;
};

#endif
