/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 09:39:57 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 11:44:51 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::string	ideaSet[5] = {"eat", "sleep", "lick", "play", "drink"};

	for (int i = 0; i < 100; i++)
		ideas[i] = ideaSet[rand() % 5];
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain(Brain const &b)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = b;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}

std::string	Brain::getIdea(int i)
{
	return (ideas[i]);
}

Brain	&Brain::operator=(Brain const& b)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = b.ideas[i];
	return (*this);
}

void	Brain::print()
{
	int	i;

	i = 0;
	while (i < 100)
	{
		std::cout << ideas[i] << std::endl;
		i++;
	}
}
