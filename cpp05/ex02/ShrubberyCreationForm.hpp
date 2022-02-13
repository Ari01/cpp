/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 12:43:02 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/13 12:47:09 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRY_HPP
#define SHRUBERRY_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string name, int signGrade, int execGrade);
		ShrubberyCreationForm(ShrubberyCreationForm const& scf);
		virtual ~ShrubberyCreationForm();
};

#endif
