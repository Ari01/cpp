/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:20:37 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 15:21:41 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm const& scf);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm		&operator=(PresidentialPardonForm const& scf);
		virtual void				execute(Bureaucrat const& e) const;
};

#endif
