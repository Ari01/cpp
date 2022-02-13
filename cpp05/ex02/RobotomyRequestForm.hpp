/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:16:31 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 15:17:41 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm const& scf);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm		&operator=(RobotomyRequestForm const& scf);
		virtual void			execute(Bureaucrat const& e) const;
};

#endif
