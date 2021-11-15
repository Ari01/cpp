/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 06:06:47 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/15 09:11:44 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int const Fixed::size = 0;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(Fixed const &f)
{
	std::cout << "Assignation operator called" <<  std::endl;
	value = f.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

std::ostream	&operator<<(std::ostream &os, Fixed const& f)
{
	int				i;
	int				fractional_part;
	int				integer_part;
	int				ten;
	int				value;

	i = 0;
	fractional_part = 0;
	integer_part = 0;
	ten = 1;
	value = f.getRawBits();
	while (i < 8)
	{
		fractional_part += (value & 1) * 10;
		value = value >> 1;
		i++;
	}
	while (i < 24)
	{
		integer_part += (value & 1) * 10;
		value = value >> 1;
		i++;
	}
	os << integer_part << "." << fractional_part << std::endl;
	return (os);
}
