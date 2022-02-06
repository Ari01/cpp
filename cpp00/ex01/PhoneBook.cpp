/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:57:22 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/06 22:04:53 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

int	ft_atoi(std::string s)
{
	int	i;
	int	sign;
	int	start;
	int	ten;
	int	ret;

	i = 0;
	sign = 1;
	ten = 1;
	ret = 0;
	while (ft_isspace(s[i]))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	start = i;
	while (ft_isdigit(s[i]))
		i++;
	if (--i >= start)
	{
		ret += (s[i] - '0') * ten;
		ten *= 10;
	}
	ret *= sign;
	return (ret);
}

PhoneBook::PhoneBook() : n_contact(0) {}

PhoneBook::~PhoneBook() {}

void	PhoneBook::set_contact(int i, std::string s)
{
	std::string	tmp;

	std::cout << s;
	std::cin >> tmp;
	this->contact[this->n_contact].set_attr(i, tmp);
}

void	PhoneBook::add_contact()
{
	if (this->n_contact == 8)
		std::cout << "Phonebook full" << std::endl;
	else
	{
		set_contact(0, "Enter first name : ");
		set_contact(1, "Enter last name : ");
		set_contact(2, "Enter nickname : ");
		set_contact(3, "Enter phone number : ");
		set_contact(4, "Enter darkest secret : ");
		this->n_contact++;
	}
}

void	PhoneBook::print_entries()
{
	int	i;

	i = 0;
	while (i < this->n_contact)
	{
		print_spaces(9);
		std::cout << i << "|";
		this->contact[i].print_names();
		i++;
	}
}

int	PhoneBook::check_index(std::string s)
{
	std::string::iterator	ite;

	if (s.size() > 10)
		return (0);
	ite = s.begin();
	while (ite != s.end())
	{
		if (!ft_isdigit(*ite))
		{
			std::cout << "incorrect index" << std::endl;
			return (0);
		}
		ite++;
	}
	return (1);
}

void	PhoneBook::search()
{
	int						i;
	std::string				tmp;

	print_entries();
	std::cout << "Enter index wanted : ";
	std::cin >> tmp;
	if (!check_index(tmp))
		return ;
	i = ft_atoi(tmp);
	if (i < 0 || i > this->n_contact - 1)
		std::cout << "Error: index not found" << std::endl;
	else
		this->contact[i].print_attr();
}
