/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 06:06:47 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/01 23:48:14 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include "Fixed.hpp"

int const Fixed::n_fractional = 8;

// CONSTS AND DEST
Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(Fixed const& f)
{
	*this = f;
}

Fixed::Fixed(int const i)
{
	value = i << n_fractional;
}

Fixed::Fixed(float const f)
{
	value = roundf(f * (1 << n_fractional));
}

Fixed::~Fixed()
{
}

// SETTERS GETTERS
int	Fixed::getRawBits(void) const
{
	return (value);
}

void	Fixed::setRawBits(int const raw)
{
	value = raw;
}

// CONVERSION
int	Fixed::toInt(void) const
{
	return (value >> n_fractional);
}

float	Fixed::toFloat(void) const
{
	return ((float)value / (float)(1 << n_fractional));
}

// OPERATORS
// AFFECT
Fixed&	Fixed::operator=(Fixed const &f)
{
	value = f.getRawBits();
	return (*this);
}

// STREAM
std::ostream	&operator<<(std::ostream &os, Fixed const& f)
{
	os << f.toFloat();
	return (os);
}

// COMPARISON
bool	Fixed::operator>(Fixed const& f)
{
	return (this->value > f.getRawBits());
}

bool	Fixed::operator<(Fixed const& f)
{
	return (this->value < f.getRawBits());
}

bool	Fixed::operator>=(Fixed const& f)
{
	return (this->value >= f.getRawBits());
}

bool	Fixed::operator<=(Fixed const& f)
{
	return (this->value <= f.getRawBits());
}

bool	Fixed::operator==(Fixed const& f)
{	
	return (this->value == f.getRawBits());
}

bool	Fixed::operator!=(Fixed const& f)
{
	return (this->value != f.getRawBits());
}

// ARITHMETIC
Fixed	Fixed::operator+(Fixed const& f)
{
	Fixed	ret(*this);

	ret.setRawBits(this->value + f.getRawBits());
	return (ret);
}

Fixed	Fixed::operator-(Fixed const& f)
{
	Fixed	ret(*this);

	ret.setRawBits(this->value - f.getRawBits());
	return (ret);
}

Fixed	Fixed::operator*(Fixed const& f)
{
	Fixed	ret(*this);
	long	tmp1, tmp2;

	tmp1 = (long)this->value;
	tmp2 = (long)f.getRawBits();
	ret.setRawBits(tmp1 * tmp2 / (1 << n_fractional));
	return (ret);
}

Fixed	Fixed::operator/(Fixed const& f)
{
	Fixed	ret(*this);
	long	tmp1, tmp2;

	tmp1 = (long)this->value;
	tmp2 = (long)f.getRawBits();
	ret.setRawBits(tmp1 * (1 << n_fractional) / tmp2);
	return (ret);
}
