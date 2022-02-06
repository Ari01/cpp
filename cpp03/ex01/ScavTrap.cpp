/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/06 18:25:17 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 20:20:03 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("unknown")
{
	std::cout << "ScavTrap default constructor called" << std::endl;	
	setAttributes(100, 50, 20);
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setAttributes(100, 50, 20);
	std::cout << "ScavTrap name constructor called" << std::endl;	
}

ScavTrap::ScavTrap(ScavTrap const& st)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = st;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const& st)
{
	ClapTrap::operator=(st);
	return (*this);
}

void	ScavTrap::attack(std::string target)
{
	if (hp <= 0)
	{
		std::cout << "ScavTrap " << name << " cannot attack while down!" << std::endl;
		std::cout << "Current hp : " << hp << std::endl;
	}
	else if (energy < 1)
	{
		std::cout << "ScavTrap " << name;
		std::cout << " does not have enough energy to attack!" << std::endl;
		std::cout << "Current energy : " << energy << std::endl;
	}
	else
	{
		std::cout << "ScavTrap " << name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << ad;
		std::cout << " points of damage!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << name << " entered Gate keeper mode" << std::endl;
}
