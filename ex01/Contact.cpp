/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 02:36:33 by dchheang          #+#    #+#             */
/*   Updated: 2021/11/13 04:31:31 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	print_spaces(int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		std::cout << " ";
		i++;
	}
}

Contact::Contact() {}

Contact::~Contact() {}

void Contact::set_attr(int i, std::string value)
{
	this->attr[i] = value;
}

void Contact::print_attr(int i)
{
	int	len;
	int	j;

	j = 0;
	len = this->attr[i].size();
	if (len <= 10)
	{
		print_spaces(10 - len);
		std::cout << this->attr[i];
	}
	else
	{
		while (j < 9)
		{
			std::cout << this->attr[i][j];
			j++;
		}
		std::cout << ".";
	}
}

void	Contact::print_names()
{
	print_attr(0);
	std::cout << "|";
	print_attr(1);
	std::cout << "|";
	print_attr(2);
	std::cout << std::endl;
}

void	Contact::print_attr()
{
	int	i;

	i = 0;
	while (i < 5)
	{
		std::cout << this->attr[i] << std::endl;
		i++;
	}
}
