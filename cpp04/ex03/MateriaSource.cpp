/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 02:00:28 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/15 13:46:14 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const& ms)
{
	*this = ms;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete (inventory[i]);
	}
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const& ms)
{
	if (this != &ms)
	{
		for (int i = 0; i < 4; i++)
		{
			if (inventory[i])
				delete (inventory[i]);
		}
		for (int i = 0; i < 4; i++)
		{
			if (ms.inventory[i])
				inventory[i] = ms.inventory[i]->clone();
		}
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *m)
{
	int	i;

	i = 0;
	while (i < 4 && inventory[i])
		i++;
	if (i != 4)
	{
		std::cout << "new Materia " << m->getType() << " learned on slot " << i << std::endl;
		inventory[i] = m;
	}
	else
		std::cout << "no more slot available to learn new materia " << m->getType() << std::endl;
}

AMateria	*MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] && inventory[i]->getType() == type)
		{
			std::cout << "Materia " << type << " created" << std::endl;
			return (inventory[i]->clone());
		}
	}
	std::cout << "unknown materia " << type << " cannot be created" << std::endl;
	return (0);
}
