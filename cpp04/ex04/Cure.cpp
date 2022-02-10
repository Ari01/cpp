/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:22:32 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 03:14:26 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "Character.hpp"

Cure::Cure() : AMateria("cure")
{
	//std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(Cure const& c) : AMateria("cure")
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = c;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure	&Cure::operator=(Cure const& c)
{
	(void)c;
	return (*this);
}

AMateria	*Cure::clone() const
{
	return (new Cure(*this));
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
