/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 00:57:05 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/15 13:33:39 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("none")
{
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const& type) : _type(type)
{
	//std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const& m)
{
	*this = m;
	//std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria	&AMateria::operator=(AMateria const& m)
{
	(void)m;
	return (*this);
}

std::string const	&AMateria::getType() const
{
	return (_type);
}
