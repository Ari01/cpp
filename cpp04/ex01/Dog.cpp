/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:49:31 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/15 12:54:33 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const& a) : Animal()
{
	*this = a;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	delete(brain);
	std::cout << "Dog destructor called" << std::endl;
}

Brain	*Dog::getBrain()
{
	return (brain);
}

Dog &Dog::operator=(Dog const& a)
{
	if (this != &a)
	{
		delete (brain);
		type = a.type;
		brain = new Brain();
		*brain = *(a.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Wouf !" << std::endl;
}
