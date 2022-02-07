/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 00:37:12 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/07 02:08:06 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("none")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string _type) : type(_type)
{
	std::cout << "Animal type constructor called" << std::endl;
}

Animal::Animal(Animal const& a)
{
	*this = a;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

Animal &Animal::operator=(Animal const& a)
{
	type = a.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "An animal doesn't make a sound" << std::endl;
}
