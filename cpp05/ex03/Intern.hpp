/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 17:10:37 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/14 17:14:57 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const& i);
		~Intern();

		Intern	&operator=(Intern const& i);
		Form	*makeForm(std::string name, std::string target) const;
};

#endif
