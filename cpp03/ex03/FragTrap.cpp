/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 19:59:22 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 00:56:46 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	setAttributes(100, 100, 30);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	setAttributes(100, 100, 30);
	std::cout << "FragTrap name constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &ft) : ClapTrap()
{
	*this = ft;
	std::cout << "Fragtrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const& ft)
{
	ClapTrap::operator=(ft);
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Fragtrap " << name << " requesting High five !" << std::endl;
}
