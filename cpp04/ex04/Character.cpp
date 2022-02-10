/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 01:09:38 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/10 03:21:27 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character() : _name("none")
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character default constructor called" << std::endl;
}

Character::Character(std::string const& name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "Character type constructor called" << std::endl;
}

Character::Character(Character const& m)
{
	*this = m;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete (inventory[i]);
	}
	std::cout << "Character destructor called" << std::endl;
}

Character	&Character::operator=(Character const& c)
{
	_name = c._name;
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete(inventory[i]);
	}
	for (int i = 0; i < 4; i++)
	{
		if (c.inventory[i])
			inventory[i] = c.inventory[i]->clone();
	}
	return (*this);
}

std::string const	&Character::getName() const
{
	return (_name);
}

AMateria	*Character::getMateria(int idx)
{
	return (inventory[idx]);
}

void	Character::equip(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && inventory[i])
		i++;
	if (i != 4)
	{
		inventory[i] = m;
		std::cout << _name << " equipped " << m->getType() << " on slot " << i << std::endl;
	}
	else
		std::cout << "No more space available to equip materia " << m->getType() << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx <= 3)
	{
		if (inventory[idx])
		{
			std::cout << "Materia " << inventory[idx]->getType();
			std::cout << " unequipped from slot " << idx << std::endl;
			inventory[idx] = NULL;
		}
		else
			std::cout << "No materia found at slot " << idx << std::endl;
	}
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx <= 3)
	{
		if (inventory[idx])
			inventory[idx]->use(target);
		else
			std::cout << "No materia found at slot " << idx << std::endl;
	}
}
