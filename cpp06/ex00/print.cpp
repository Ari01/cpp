/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchheang <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:38:54 by dchheang          #+#    #+#             */
/*   Updated: 2022/02/17 14:09:06 by dchheang         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

void	print_bad_string()
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}

void	print_special_value(std::string s)
{
	if (s == "inf")
		print_bad_string();
	else if (s == "nan" || s == "nanf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (s == "+inf" || s == "+inff" || s == "-inf" || s == "-inff")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << s;
		if (s == "+inf" || s == "-inf")
			std::cout << "f";
		std::cout << std::endl;
		s.resize(4);
		std::cout << "double: " << s;
	}
}

bool	printable_c(double d)
{
	std::cout << "char: ";
	if (d < 0 || d > 255)
		std::cout << "overflow";
	else if (d < 32 || d > 126)
		std::cout << "Non displayable";
	else
		return (true);
	std::cout << std::endl;
	return (false);
}

bool	printable_i(double d)
{
	std::cout << "int: ";
	if (d < INT_MIN || d > INT_MAX)
		std::cout << "overflow";
	else
		return (true);
	std::cout << std::endl;
	return (false);
}

bool	printable_f(double d)
{
	std::cout << "float: ";
	if (d > FLT_MAX || -d > FLT_MAX)
		std::cout << "overflow";
	else
		return (true);
	std::cout << std::endl;
	return (false);
}
