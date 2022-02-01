/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 06:06:47 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/01 23:00:17 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

int const Fixed::n_fractional = 8;

Fixed::Fixed() : value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const& f)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

Fixed::Fixed(int const i)
{
	std::cout << "Int constructor called" << std::endl;
	value = i << n_fractional;
}

Fixed::Fixed(float const f)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(f * (1 << n_fractional));
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
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

int	Fixed::toInt(void) const
{
	return (value >> n_fractional);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << n_fractional));
}

std::ostream	&operator<<(std::ostream &os, Fixed const& f)
{
	os << f.toFloat();
	return (os);
}
