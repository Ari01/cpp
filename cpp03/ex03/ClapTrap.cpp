/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 00:17:12 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 21:49:19 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("unknown"), hp(10), energy(10), ad(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;	
}

ClapTrap::ClapTrap(std::string name) : hp(10), energy(10), ad(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const& ct)
{
	std::cout << "ClapTrap Copy constructor called" << std::endl;
	*this = ct;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;	
}

std::string	ClapTrap::getName()
{
	return (name);
}

int	ClapTrap::getHp()
{
	return (hp);
}

int	ClapTrap::getEnergy()
{
	return (energy);
}

int	ClapTrap::getAd()
{
	return (ad);
}

void	ClapTrap::setHp(int _hp)
{
	hp = _hp;
}

void	ClapTrap::setEnergy(int _energy)
{
	energy = _energy;
}

void	ClapTrap::setAd(int _ad)
{
	ad = _ad;
}

void	ClapTrap::setAttributes(int _hp, int _energy, int _ad)
{
	hp = _hp;
	energy = _energy;
	ad = _ad;
}

void	ClapTrap::print()
{
	std::cout << name << std::endl;
	std::cout << hp << " hp, " << energy << " energy, " << ad << " ad" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const& ct)
{
	name = ct.name;
	this->setAttributes(ct.hp, ct.energy, ct.ad);
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << " cannot attack while down!" << std::endl;
		std::cout << "Current hp : " << hp << std::endl;
	}
	else if (energy < 1)
	{
		std::cout << "ClapTrap " << name;
		std::cout << " does not have enough energy to attack!" << std::endl;
		std::cout << "Current energy : " << energy << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name;
		std::cout << " attacks " << target;
		std::cout << ", causing " << ad;
		std::cout << " points of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name;
		std::cout << " is already down and cannot take anymore damage.";
		std::cout << "MERCY PLEAAASE !" << std::endl;
	}
	else
	{
		std::cout << "ClapTrap " << name;
		std::cout << " received " << amount;
		std::cout << " points of damage!" << std::endl;
		hp -= amount;
		std::cout << "Remaining hp = " << hp << std::endl;
		if (hp <= 0)
			std::cout << "ClapTrap " << name << " is down! MEDIC!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (hp <= 0)
	{
		std::cout << "ClapTrap " << name << " is down and cannot repair itself.";
		std::cout << " Current hp : " << hp << std::endl;
	}
	else if (energy < 1)
	{
		std::cout << "ClapTrap " << name;
		std::cout << " does not have enough energy to launch its repair modules!" << std::endl;
		std::cout << "Current energy : " << energy << std::endl;
	}
	else
	{
		hp += amount;
		std::cout << "ClapTrap " << name;
		std::cout << " restaures " << amount;
		std::cout << " hp. Curent hp : " << hp << std::endl;
	}
}
