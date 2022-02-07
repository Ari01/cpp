/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 21:10:32 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 00:59:05 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), name("unknown")
{
	ClapTrap::name += "_clap_name";
	setAttributes(100, 50, 30);
	std::cout << "Diamond trap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string newname) : 
	ClapTrap(newname), FragTrap(), ScavTrap(), name(newname)
{
	ClapTrap::name += "_clap_name";
	setAttributes(100, 50, 30);
	std::cout << "Diamond trap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const& dt) : 
	ClapTrap(), FragTrap(), ScavTrap()
{
	*this = dt;
	std::cout << "Diamond trap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond trap destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const& dt)
{
	ClapTrap::operator=(dt);
	return (*this);
}

void	DiamondTrap::attack(std::string target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "My name is " << name;
	std::cout << " and my subobject claptrap name is " << ClapTrap::name << std::endl;
}
