/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 15:16:31 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 15:25:06 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string name, std::string target);
		RobotomyRequestForm(RobotomyRequestForm const& rrf);
		virtual ~RobotomyRequestForm();

		RobotomyRequestForm		&operator=(RobotomyRequestForm const& rrf);
		virtual void			execute(Bureaucrat const& e) const;
};

#endif
