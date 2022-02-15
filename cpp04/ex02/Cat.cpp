/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:45:53 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/15 12:58:37 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const& a) : Animal()
{
	*this = a;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	delete(brain);
	std::cout << "Cat destructor called" << std::endl;
}

Brain	*Cat::getBrain()
{
	return (brain);
}

Cat &Cat::operator=(Cat const& a)
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

void	Cat::makeSound() const
{
	std::cout << "Miwaw !" << std::endl;
}
